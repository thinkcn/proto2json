#!/usr/bin/bash
export protover=`cat ../src/version.h | grep PROTOJSON_VERSION`
ver=`echo $protover | awk '{print $3}' | sed "s/\"//g"`
tar -zcvf proto2json-$ver-macos-brew.tar.gz ../build/proto2json
openssl dgst -sha256 proto2json-$ver-macos-brew.tar.gz