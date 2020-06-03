make package
rm -f /opt/simject/CarPlayPls.dylib
cp -v .theos/obj/iphone_simulator/x86_64/CarPlayPls.dylib /opt/simject/CarPlayPls.dylib
codesign -f -s - /opt/simject/CarPlayPls.dylib
cp -v $(PWD)/CarPlayPls.plist /opt/simject
resim