# [Test script] mds technology, suhan Jang
############################################################################

export APP_FOLDER_NAME = $(MAKEFLAGS)
ifeq ($(MAKEFLAGS),)

#===========================================================================
#    ■  Modify this value to compile examples you want (folder name)
#
#                          [        ▽        ]
#                                   ▽
#
export APP_FOLDER_NAME =            02
endif
#                                   △
#                          [        △        ]
#                                   △
#                                   △◁◁◁  Just modify this here
#                                   △
#                                   △
#   		    				    2
#  	 	    				        3
#  	 	    				        4
#                                  ...
#   	     					    
#
#===========================================================================
#    ■  Indentify your compiler path(TOOLPATH), sources path(SRCDIR)
#
#                  [            ▽             ]
#                               ▽
#
# CROSS_COMPILE
ifdef CROSS_COMPILE
export TOOLPATH =/opt/CodeSourcery/Sourcery_G++_Lite
export SRCDIR   =$(PWD)
else 
export TOOLPATH =/usr
export SRCDIR   =$(PWD)
endif
#
#                  [            △             ]
#                               △
#                               △◁◁◁  Just modify this here
#
#
#===========================================================================
#    ■  If you want to build/unbuild the example folder partially, 
#         Use the flags (Command line argument of Make tool)
#
#                  ▽               
#                  ▽    
#                  ▽▷▷▷▷▷▷▷ 	make MAKEFLAGS=3         :  The folder name "3" is compiled
#                               make clean MAKEFLAGS=3	 :  The folder name "3" is cleaned
#   
#   
#   
#===========================================================================
all:
	@printf "________________________ Make example [ $(APP_FOLDER_NAME) ] ________________________\n"
	$(MAKE) -C ./config -f main.mk
	@printf "\n\n\n\n"
	
clean:
	@printf "________________________ Clean example [ $(APP_FOLDER_NAME) ] _______________________\n"
	$(MAKE) -C ./config -f main.mk clean
	@printf "\n\n\n\n"
############################################################################
# EOF