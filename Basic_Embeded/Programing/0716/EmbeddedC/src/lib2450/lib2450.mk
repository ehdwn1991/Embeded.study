SRC   	= $(wildcard *.c)
ASRC   	= $(wildcard *.S)
OBJS	= $(SRC:.c=.o) $(ASRC:.S=.o)

%.o : %.S
	$(CC) -c $(CFLAGS) -o $@ $<

%.o : %.c
	$(CC) -c $(CFLAGS) -o $@ $<

all: $(OBJS)


clean:
	-rm -rf $(wildcard *.o)
