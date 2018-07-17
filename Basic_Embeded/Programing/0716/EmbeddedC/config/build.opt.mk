.EXPORT_ALL_VARIABLES:

# CROSS_COMPILE
ifdef CROSS_COMPILE
INCLUDE	= -I$(STARTUP_DIR) -I$(LIBCDIR)/include -I$(LIBGCCDIR)/include
INCLUDE += -I$(LIB2450_DIR) -I$(USER_APP)

CFLAGS = -gdwarf-2 -W -Wall -Wno-trigraphs -pipe -g -O0 -fomit-frame-pointer
CFLAGS += -Bstatic -mthumb-interwork -funsigned-char -std=c99
CFLAGS += -mcpu=arm926ej-s -fasm -marm -mlittle-endian -Werror=pointer-arith

LDFLAGS	= --cref -Bstatic -nostartfiles \
			-T $(STARTUP_DIR)/s3c2450_ram.ld -Map $(USER_APP)/$(APP_FOLDER_NAME).map
else
INCLUDE	= -I$(LIBCDIR)/include -I$(LIBGCCDIR)/include
INCLUDE += -I$(USER_APP)

CFLAGS = -gdwarf-2 -W -Wall -Wno-trigraphs -pipe -g -O0 -fomit-frame-pointer
CFLAGS += -Bstatic -funsigned-char -std=c99
CFLAGS += -Werror=pointer-arith

LDFLAGS	= 
endif
			
OCFLAGS = -O binary -R .note -R .comment -S