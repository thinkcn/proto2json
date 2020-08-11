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
protojson -p ./json -e api ../tests/UserInfo.proto
```