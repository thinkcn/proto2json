mkdir build
mkdir deps
root=`pwd`
antlr=`pwd`/library/antlrruntime
deps=`pwd`/deps
jsoncpp=`pwd`/library/jsoncpp

SYSTEM=`uname -s`
ARCH=`uname -p`

cd deps
curl -O https://www.antlr.org/download/antlr-4.7.1-complete.jar
cd ..
# svn co https://github.com/antlr/antlr4/trunk/runtime/Cpp library/antlrruntime
svn co https://github.com/antlr/antlr4/tags/4.7.1/runtime/Cpp library/antlrruntime
# svn co https://github.com/antlr/antlr4/tags/4.6/runtime/Cpp library/antlrruntime
cd library/antlrruntime
mkdir build
cd build
if [ $SYSTEM = "Darwin" ] && [ $ARCH = "arm" ];then
    cmake .. -DANTLR_JAR_LOCATION=$deps/antlr-4.7.1-complete.jar -DWITH_DEMO=True -DCMAKE_OSX_ARCHITECTURES=x86_64
    make
    cp -r ../dist x86
    make clean
    cmake .. -DANTLR_JAR_LOCATION=$deps/antlr-4.7.1-complete.jar -DWITH_DEMO=True -DCMAKE_OSX_ARCHITECTURES=arm64
    make
    cp -r ../dist arm
    lipo -create -output libantlr4-runtime.a ./arm/libantlr4-runtime.a ./x86/libantlr4-runtime.a
    lipo -create -output libantlr4-runtime.4.7.1.dylib ./arm/libantlr4-runtime.4.7.1.dylib ./x86/libantlr4-runtime.4.7.1.dylib
    cp libantlr4-runtime.a ../dist
    cp libantlr4-runtime.4.7.1.dylib ../dist
    DESTDIR=$deps make install
else
    cmake .. -DANTLR_JAR_LOCATION=$deps/antlr-4.7.1-complete.jar -DWITH_DEMO=True
    make
    DESTDIR=$deps make install
fi

# make jsoncpp
cd $jsoncpp
mkdir build
cd build
if [ $SYSTEM = "Darwin" ] && [ $ARCH = "arm" ];then
    cmake -DCMAKE_OSX_ARCHITECTURES=x86_64 ..
    DESTDIR=./x86 make install
    make clean
    cmake -DCMAKE_OSX_ARCHITECTURES=arm64 ..
    DESTDIR=./arm make install
    make clean
    lipo -create -output libjsoncpp.a ./arm/usr/local/lib/libjsoncpp.a ./x86/usr/local/lib/libjsoncpp.a
    cp libjsoncpp.a ./src/lib_json/libjsoncpp.a
    DESTDIR=$deps make install
else
    cmake ..
    DESTDIR=$deps make install
fi

cd $root
echo "Succ!"