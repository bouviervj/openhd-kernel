#bin/bash

# clones latest openhd mavlink into tmp folder, generates header, copies them over, then deletes tmp folder


mkdir tmp
cd tmp
git clone https://github.com/OpenHD/mavlink.git --recurse-submodules
cd mavlink

python3 -m pymavlink.tools.mavgen --lang=C --wire-protocol=2.0 --output=generated/include/mavlink/v2.0 message_definitions/v1.0/openhd.xml


echo "Header generated, copying"

cd ../../

rm -rf mavlink
mv tmp/mavlink/generated/include/mavlink .
rm -rf tmp

echo "copying done, done"
