#
################################################################################
#                                                                               
#     ####   ###   #####  #     #  #####   <T.M>                                
#    #        #    #      #     #  #                                            
#     ####    #    ####    #   #   ####    Powered by Course-Ware Framework     
#         #   #    #        # #    #          (C) Copyrights, In4MaySun Inc     
#    #####   ###   #####     #     #####                                        
#                                                         www.in4maysun.com     
#                                                          by Seo Kwang-Won
################################################################################
# 2014-06-13 10:59PM

################################################################################
#
# BOARD & ARCH SELECTION
#

#BOARD	=mo
#BOARD	=mi
#BOARD	=rb
BOARD	=mc
#BOARD	=m2
#BOARD	=ds

ifeq ($(BOARD),mo)
ARCH	=S3C2410
endif
ifeq ($(BOARD),rb)
ARCH	=S3C2440
endif
ifeq ($(BOARD),m2)
ARCH	=S3C2440
endif
ifeq ($(BOARD),mc)
ARCH	=S5PC100
endif
ifeq ($(BOARD),ds)
ARCH	=S3C2450
endif


################################################################################
#
#	GCC
#

# TOPDIR 		= .
# VERSION 	= 4.4.1
# TOOLPATH 	= P:/$(VERSION)
# TARGET		= arm-none-eabi

# LIBCDIR 	= $(TOOLPATH)/$(TARGET)/lib
# LIBGCCDIR 	= $(TOOLPATH)/lib/gcc/$(TARGET)/$(VERSION)

TOPDIR 		= .
VERSION 	= 7.3.1
TOOLPATH 	= /usr/local/gcc-arm/gcc-arm-none-eabi-7-2018-q2-update
TARGET		= arm-none-eabi

LIBCDIR 	= $(TOOLPATH)/$(TARGET)/lib
LIBGCCDIR 	= $(TOOLPATH)/lib/gcc/$(TARGET)/$(VERSION)


################################################################################
#
# CC/LD/OBJCOPY/OBJDUMP
#
# amssembler
AS			= $(TOOLPATH)/bin/$(TARGET)-as

CC			= $(TOOLPATH)/bin/$(TARGET)-gcc
LD 			= $(TOOLPATH)/bin/$(TARGET)-ld
OBJCOPY	 	= $(TOOLPATH)/bin/$(TARGET)-objcopy
OBJDUMP 	= $(TOOLPATH)/bin/$(TARGET)-objdump


################################################################################
#
#	C & ASM & OBJS
#

CSRC 		= $(wildcard *.c)
ASRC 		= $(wildcard *.S)

OBJS    	= $(CSRC:.c=.o) $(ASRC:.S=.o)

################################################################################
#
#	FLAGS
#

CFLAGS	= 	-g 
CFLAGS	+= 	-W 
CFLAGS	+= 	-O0

ifeq ($(BOARD),mo)
CFLAGS	+= 	-mcpu=arm920t
endif
ifeq ($(BOARD),mi)
CFLAGS	+= 	-mcpu=arm920t
endif
ifeq ($(BOARD),rb)
CFLAGS	+= 	-mcpu=arm920t
endif
ifeq ($(BOARD),m2)
CFLAGS	+= 	-mcpu=arm920t
endif

ifeq ($(BOARD),mc)
CFLAGS	+= 	-mcpu=cortex-a8
CFLAGS	+=	-mfloat-abi=softfp -mfpu=neon 
CFLAGS	+= 	-ftree-vectorize -ftree-vectorizer-verbose=6
endif

CFLAGS	+= 	-fno-builtin

LDFLAGS	= 	-nostartfiles -T RAMs.ld -Map $(IMAGE).map
OCFLAGS = 	-O binary -R .note -R .comment -S

################################################################################
#
#	IMAGE NAME
#

IMAGE = image


################################################################################
#
#	MAKE RULE	=> 해석해 보기!!!!
#

#TARGET : dependencies
all: $(IMAGE).bin

$(IMAGE).bin : $(OBJS)
	$(LD) $(LDFLAGS) -o $(IMAGE) $(OBJS) -L$(LIBCDIR) -L$(LIBGCCDIR) -lc -lgcc #여기서 image가 나옴
	$(OBJCOPY) $(OCFLAGS) $(IMAGE) $@ 
	#여기서 image.bin이 나옴

%.o : %.S
	$(CC) -c $(CFLAGS) -o $@ $<

%.o : %.c
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	rm -f $(OBJS)
	rm -f $(IMAGE)
	rm -f $(IMAGE).*
