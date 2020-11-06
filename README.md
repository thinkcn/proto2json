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
proto2json -p ./json -e api ../tests/UserInfo.proto
# generate json
proto2json -p ./json -e json ../tests/UserInfo.proto
```

```bash
# custom gcc --> CMakeLists.txt
SET(CMAKE_C_COMPILER "/usr/local/bin/gcc")
SET(CMAKE_CXX_COMPILER "/usr/local/bin/c++") 

# custom gcc --> path
export CC=/usr/local/bin/gcc
export CXX=/usr/local/bin/g++
```

## Example

### 1. tests/User.proto 

```protobuf
syntax = "proto3";

package app.center;

message User {
    int32  id        = 1; // ID
    string nick      = 2; // nick name
    stirng name      = 3; // name
    string avatarUrl = 4; // url of avatar 
}
```

### 2. in the path `build` execute

```
./proto2json -p out ../tests/User.proto
```

### 3. build/out/app.center.User.json is the resault

```json
{
    "fields" : 
    [
        {
            "comment" : "// ID",
            "isRepeated" : false,
            "name" : "id",
            "number" : "1",
            "type" : "int32"
        },
        {
            "comment" : "// nick name",
            "isRepeated" : false,
            "name" : "nick",
            "number" : "2",
            "type" : "string"
        },
        {
            "comment" : "// name",
            "isRepeated" : false,
            "name" : "name",
            "number" : "3",
            "type" : "stirng"
        },
        {
            "comment" : "// url of avatar ",
            "isRepeated" : false,
            "name" : "avatarUrl",
            "number" : "4",
            "type" : "string"
        }
    ],
    "name" : "User"
}
```
