include $(GNUSTEP_MAKEFILES)/common.make

PACKAGE_NAME = VolumeControl
VERSION = 0.7
APP_NAME = VolumeControl
VolumeControl_MAIN_MODEL_FILE=VolumeControl.gorm
VolumeControl_APPLICATION_ICON=headphones.tiff

VolumeControl_OBJC_FILES = main.m AppController.m
VolumeControl_RESOURCE_FILES = VolumeControl.gorm headphones.tiff VolumeControl.rtf

# GNUSTEP_TARGET_OS is defined to `linux-gnueabi' on armel and
# `linux-gnuspe' on powerpcspe.
ifneq (,$(findstring linux-gnu,$(GNUSTEP_TARGET_OS)))
ADDITIONAL_GUI_LIBS = -lasound
endif

include $(GNUSTEP_MAKEFILES)/application.make

