mkdir build
mkdir deps
root=`pwd`
antlr=`pwd`/library/antlrruntime
deps=`pwd`/deps
jsoncpp=`pwd`/library/jsoncpp
cd deps
curl -O https://www.antlr.org/download/antlr-4.7.1-complete.jar
cd ..
svn co https://github.com/antlr/antlr4/trunk/runtime/Cpp library/antlrruntime
cd library/antlrruntime
mkdir build
cd build
cmake .. -DANTLR_JAR_LOCATION=$deps/antlr-4.7.1-complete.jar -DWITH_DEMO=True
make
DESTDIR=$deps make install
cd $jsoncpp
mkdir build
cd build
cmake ..
DESTDIR=$deps make install
cd $root
echo "Succ!"