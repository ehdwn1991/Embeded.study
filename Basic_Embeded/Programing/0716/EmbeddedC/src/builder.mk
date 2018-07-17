USER_OBJ_DIR = ./$(APP_FOLDER_NAME)

SRC 			= $(wildcard $(USER_OBJ_DIR)/*.c)
ASRC 			= $(wildcard $(USER_OBJ_DIR)/*.S)
STARTUP_OBJS 	= $(wildcard $(STARTUP_DIR)/*.o)
LIB2450_OBJS	= $(wildcard $(LIB2450_DIR)/*.o)

# CROSS_COMPILE
ifdef CROSS_COMPILE
OBJS    =  $(SRC:.c=.o) $(ASRC:.S=.o)
OBJS	+=  $(STARTUP_OBJS)
OBJS	+=  $(LIB2450_OBJS)
else
OBJS    =  $(SRC:.c=.o)
OBJS	+=  $(STARTUP_OBJS)
OBJS	+=  $(LIB2450_OBJS)
endif

%.o:%.S 
	$(CC) -c $(CFLAGS) -o $@ $<

%.o:%.c
	$(CC) -c $(CFLAGS) -o $@ $<

# CROSS_COMPILE
ifdef CROSS_COMPILE
all: $(OBJS)
	$(LD) $(LDFLAGS) -o $(USER_OBJ_DIR)/$(TARGET).elf $^ -L$(LIBCDIR) -L$(LIBGCCDIR) -lm -lc -lgcc
else
all: $(OBJS)
	$(CC) $(LDFLAGS) -o $(USER_OBJ_DIR)/$(TARGET).elf $^ -lm -lc
endif

clean:
	rm -rf $(USER_OBJ_DIR)/*.o $(USER_OBJ_DIR)/*.map
