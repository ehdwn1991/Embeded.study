SRC   	= $(wildcard *.c)
ASRC   	= $(wildcard *.S)

# CROSS_COMPILE
ifdef CROSS_COMPILE
OBJS	= $(SRC:.c=.o) $(ASRC:.S=.o)
else
OBJS	= $(SRC:.c=.o)
endif

%.o : %.S
	$(CC) -c $(CFLAGS) -o $@ $<

%.o : %.c
	$(CC) -c $(CFLAGS) -o $@ $<

all: $(OBJS)

clean:
	rm -rf $(wildcard *.o)
