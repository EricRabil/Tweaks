INSTALL_TARGET_PROCESSES = SpringBoard
ARCHS = x86_64
TARGET = simulator:clang::13.0

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = Homie

Homie_FILES = Tweak.x
Homie_CFLAGS = -fobjc-arc

include $(THEOS_MAKE_PATH)/tweak.mk

ifneq (,$(filter x86_64,$(ARCHS)))
setup:: clean all
	@rm -f /opt/simject/$(TWEAK_NAME).dylib
	@cp -v $(THEOS_OBJ_DIR)/$(TWEAK_NAME).dylib /opt/simject/$(TWEAK_NAME).dylib
	@codesign -f -s - /opt/simject/$(TWEAK_NAME).dylib
	@cp -v $(PWD)/$(TWEAK_NAME).plist /opt/simject
endif
