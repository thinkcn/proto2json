# proto2json
Convert Protobuf's proto file to json

## Building proto2json

```bash
git clone --recursive https://github.com/thinkcn/proto2json
sh autogen.sh
cd build 
#cmake -DCMAKE_INSTALL_PREFIX=./out ..
cmake ..
make
make install
```

## Usage

```bash
# generate swagger api
protojson -p ./json -e api ../tests/UserInfo.proto
# generate json
protojson -p ./json -e json ../tests/UserInfo.proto
```

```bash
# 特定版本 gcc --> 修改CMakeLists.txt
SET(CMAKE_C_COMPILER "/usr/local/bin/gcc")
SET(CMAKE_CXX_COMPILER "/usr/local/bin/c++") 

# 特定版本 gcc --> 环境变量法
export CC=/usr/local/bin/gcc
export CXX=/usr/local/bin/g++
```