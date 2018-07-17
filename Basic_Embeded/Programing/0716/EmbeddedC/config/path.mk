.EXPORT_ALL_VARIABLES:

# CROSS_COMPILE
ifdef CROSS_COMPILE
STARTUP_DIR = $(SRCDIR)/src/startup
LIB2450_DIR = $(SRCDIR)/src/lib2450
USER_APP 	= $(SRCDIR)/src/$(APP_FOLDER_NAME)

CC 			= $(TOOLPATH)/bin/arm-none-eabi-gcc
LD 			= $(TOOLPATH)/bin/arm-none-eabi-ld
OBJCOPY 	= $(TOOLPATH)/bin/arm-none-eabi-objcopy
LIBCDIR 	= $(TOOLPATH)/arm-none-eabi/lib
LIBGCCDIR 	= $(TOOLPATH)/lib/gcc/arm-none-eabi/4.5.2
else
STARTUP_DIR = $(SRCDIR)/src/startup
LIB2450_DIR = 
USER_APP 	= $(SRCDIR)/src/$(APP_FOLDER_NAME)
endif