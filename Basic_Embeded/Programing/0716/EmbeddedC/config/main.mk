include path.mk build.opt.mk

export TARGET = $(APP_FOLDER_NAME)

all: $(TARGET)

# CROSS_COMPILE
ifdef CROSS_COMPILE
$(TARGET) :
	$(MAKE) -C $(STARTUP_DIR) -f startup.mk
	$(MAKE) -C $(LIB2450_DIR) -f lib2450.mk
	$(MAKE) -C $(SRCDIR)/src -f builder.mk
	
	#mv $(USER_APP)/$(TARGET).elf $(SRCDIR)/bin
	$(OBJCOPY) $(OCFLAGS) $(USER_APP)/$(TARGET).elf $(USER_APP)/$(TARGET).bin
	cp $(USER_APP)/$(TARGET).bin /tftpboot/MDS2450.bin
else
$(TARGET) :
	$(MAKE) -C $(STARTUP_DIR) -f startup.mk
	$(MAKE) -C $(SRCDIR)/src -f builder.mk
	cp $(USER_APP)/$(TARGET).elf $(SRCDIR)/a.out
endif
	
	#rm -rf $(SRCDIR)/bin/$(TARGET).elf
#	rm -rf $(SRCDIR)/src/$(APP_FOLDER_NAME)/$(APP_FOLDER_NAME).map
		
# CROSS_COMPILE
ifdef CROSS_COMPILE
clean:
	$(MAKE) -C $(STARTUP_DIR) -f startup.mk clean
	$(MAKE) -C $(LIB2450_DIR) -f lib2450.mk clean
	$(MAKE) -C $(SRCDIR)/src -f builder.mk clean 
	rm -rf $(wildcard $(SRCDIR)/bin/$(TARGET).*)
else
clean:
	$(MAKE) -C $(STARTUP_DIR) -f startup.mk clean
	$(MAKE) -C $(SRCDIR)/src -f builder.mk clean 
	rm -rf $(wildcard $(SRCDIR)/bin/$(TARGET).*)
endif
