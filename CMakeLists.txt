cmake_minimum_required(VERSION 2.8)

project("proto2json")

# CMake commands copied by the CMake file for CImg

# To use PKG_CHECK_MODULES to find some optional packages
find_package(PkgConfig)
 

# ### Search Additional Libraries ##########
  
SET(CMAKE_CXX_FLAGS "-std=c++11 -O3")

# #### End of additional libraries search ##########


### Configure Paths according to detected packages
       

if(NOT APPLE)
  if(NOT WIN32)
    if(X11_FOUND)
      SET(CIMG_CFLAGS "${CIMG_CFLAGS} ${CIMG_XSHM_CCFLAGS} ${CIMG_XRANDR_CCFLAGS}")
      SET(SYSTEM_LIBS ${SYSTEM_LIBS})
    endif()
  endif(NOT WIN32)
endif(NOT APPLE)

if(X11_FOUND)

  link_directories(${X11_LIB_DIRS})
  include_directories(${X11_INCLUDE_DIR})
  SET( SYSTEM_LIBS ${SYSTEM_LIBS} ${X11_LIBRARIES} )
endif()

if (NOT WIN32)
  SET( SYSTEM_LIBS ${SYSTEM_LIBS} ${CMAKE_THREAD_LIBS_INIT} )
endif()

if( WIN32)
  SET( SYSTEM_LIBS  ${SYSTEM_LIBS}  gdi32 )
endif()

link_libraries(${PROJECT_SOURCE_DIR}/deps/usr/local/lib/libjsoncpp_static.a)
include_directories(${PROJECT_SOURCE_DIR}/deps/use/local/include)

if(LAPACK_FOUND)
  SET(CIMG_CFLAGS "${CIMG_CFLAGS} ${CIMG_LAPACK_CCFLAGS}")
  link_directories( ${LAPACK_LIBRARY_DIRS} )
  include_directories( ${LAPACK_INCLUDE_DIRS} )
  SET( SYSTEM_LIBS ${SYSTEM_LIBS} ${LAPACK_LIBRARIES} )
endif()

if(BLAS_FOUND)

  SET(CIMG_CFLAGS "${CIMG_CFLAGS} ${CIMG_BLAS_CCFLAGS}")
  link_directories( ${BLAS_LIBRARY_DIRS} )
  include_directories( ${BLAS_INCLUDE_DIRS} )
  SET( SYSTEM_LIBS ${SYSTEM_LIBS} ${BLAS_LIBRARIES} )
endif()

# Add CIMG Flags to Compilation Flags
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${CIMG_CFLAGS}") 

# CMake commands for this specific project start here

# to disable some warnings for CImg
if (NOT WIN32)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wdeprecated -Wno-attributes" )
endif()

if (APPLE)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wdeprecated -Wwritable-strings -std=c++11" )
endif()

if (MSVC)
  set(CMAKE_CXX_FLAGS "/EHsc /wd4127 /wd4311 /wd4312 /wd4512 /wd4571 /wd4640 /wd4706 /wd4710 /wd4800 /wd4804 /wd4820 /wd4996")
endif()


set(proto2json-GENERATED_SRC
  ${PROJECT_SOURCE_DIR}/gen/Protobuf3BaseListener.cpp 
  ${PROJECT_SOURCE_DIR}/gen/Protobuf3BaseVisitor.cpp 
  ${PROJECT_SOURCE_DIR}/gen/Protobuf3Lexer.cpp 
  ${PROJECT_SOURCE_DIR}/gen/Protobuf3Listener.cpp 
  ${PROJECT_SOURCE_DIR}/gen/Protobuf3Parser.cpp 
  ${PROJECT_SOURCE_DIR}/gen/Protobuf3Visitor.cpp  
 )

foreach( src_file ${proto2json-GENERATED_SRC} )
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          GENERATED TRUE
          )
endforeach( src_file ${proto2json-GENERATED_SRC} )

MESSAGE(STATUS "HOME dir: ${ANTLR_CPP_RUNTIME_DST}/usr/local/")

link_directories (
  ${PROJECT_SOURCE_DIR}/deps/usr/local/lib/
  ${PROJECT_SOURCE_DIR}/deps/usr/local/lib64/
  )
include_directories(
  ${PROJECT_SOURCE_DIR}/deps/usr/local/include/antlr4-runtime/
  ${PROJECT_SOURCE_DIR}/deps/usr/local/include/misc
  ${PROJECT_SOURCE_DIR}/deps/usr/local/include/atn
  ${PROJECT_SOURCE_DIR}/deps/usr/local/include/dfa
  ${PROJECT_SOURCE_DIR}/deps/usr/local/include/tree
  ${PROJECT_SOURCE_DIR}/deps/usr/local/include/support
  ${PROJECT_SOURCE_DIR}/deps/usr/local/include/
  ${PROJECT_SOURCE_DIR}/deps/
  ${PROJECT_SOURCE_DIR}/gen/
  ${PROJECT_SOURCE_DIR}/src/
  )

set(proto2json-SRC
  ${PROJECT_SOURCE_DIR}/src/main.cpp
  ${PROJECT_SOURCE_DIR}/src/AVisitor.cpp 
  ${PROJECT_SOURCE_DIR}/src/Comment.cpp
  ${PROJECT_SOURCE_DIR}/src/Helper.cpp
  ${proto2json-GENERATED_SRC}
  )

if (NOT CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
  set (flags_1 "-Wno-overloaded-virtual")
else()
  set (flags_1 "-MP /wd4251")
endif()

foreach( src_file ${proto2json-SRC} )
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          COMPILE_FLAGS "${COMPILE_FLAGS} ${flags_1}"
          )
endforeach( src_file ${proto2json-SRC} )

add_executable(proto2json
  ${proto2json-SRC}
)

if (CMAKE_CXX_COMPILER_ID MATCHES "MSVC")  
  # see https://github.com/antlr/antlr4/issues/1874
  target_compile_options(proto2json PUBLIC "$<$<CONFIG:DEBUG>:/MT>")
endif()

if(WIN32)
  target_link_libraries(proto2json "${PROJECT_SOURCE_DIR}/deps/usr/local/lib/antlr4-runtime.lib")
endif()

if(APPLE)
  target_link_libraries(proto2json "${PROJECT_SOURCE_DIR}/deps/usr/local/lib/libantlr4-runtime.a")
elseif(UNIX)
  target_link_libraries(proto2json "${PROJECT_SOURCE_DIR}/deps/usr/local/lib/libantlr4-runtime.a")
endif()  

target_link_libraries(proto2json ${SYSTEM_LIBS})

include(GNUInstallDirs)
install(FILES 
    README.md
    LICENSE 
    DESTINATION "share/doc/proto2json")
install(PROGRAMS 
    build/proto2json
    DESTINATION bin)

if(CMAKE_SYSTEM_NAME MATCHES "Linux")
add_custom_command(TARGET proto2json POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy_if_different
  "${PROJECT_SOURCE_DIR}/deps/usr/local/lib/libantlr4-runtime.so"
  $<TARGET_FILE_DIR:proto2json>)
endif()

if(WIN32)
add_custom_command(TARGET proto2json POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy_if_different
  "${PROJECT_SOURCE_DIR}/deps/usr/local/lib/antlr4-runtime.dll"
  $<TARGET_FILE_DIR:proto2json>)
endif()

if(APPLE)
add_custom_command(TARGET proto2json POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy_if_different
  "${PROJECT_SOURCE_DIR}/deps/usr/local/lib/libantlr4-runtime.a"
  $<TARGET_FILE_DIR:proto2json>)
endif()

# copy the input file next to the generated executable
#add_custom_command(TARGET proto2json POST_BUILD
#  COMMAND ${CMAKE_COMMAND} -E copy_if_different
#  "${PROJECT_SOURCE_DIR}/tests/test.php"
#  $<TARGET_FILE_DIR:proto2json>)

# necessary because the default working directory of Visual Studio
# is not the same as the one in which the binary is created
# so we copy the input file twice:
# one for when you launch the executale in Visual Studio (CTRL+F5)
# one for when you launch it normally
if (WIN32)
add_custom_command(TARGET proto2json POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy_if_different
  "${PROJECT_SOURCE_DIR}/tests/test.php"
  $<TARGET_FILE_DIR:proto2json>/../)
endif()