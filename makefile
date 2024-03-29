#
# 'make depend' uses makedepend to automatically generate dependencies 
#               (dependencies are added to end of Makefile)
# 'make'        build executable file
# 'make clean'  removes all .o and executable files
#

# define the C compiler to use
CC = clang++

# define any compile-time flags
CC_FLAGS = -Wall -pthread -std=c++11  

# define any directories containing header files other than /usr/include
#
INCLUDES = -I./include

# define library paths in addition to /usr/lib
#   if I wanted to include libraries not in /usr/lib I'd specify
#   their path using -Lpath, something like:
LFLAGS =  

# define any libraries to link into executable:
#   if I want to link in libraries (libx.so or libx.a) I use the -llibname 
#   option, something like (this will link in libmylib.so and libm.so:
LIBS =  

# source extension
SRC_EXT = cc

# source directory
SRC_DIR = src

# define the C source files
SRC_FILES = $(SRC_DIR)/shepherd.cc \
			$(SRC_DIR)/main.cc \
			$(SRC_DIR)/server/server.cc \
			$(SRC_DIR)/server/config.cc \
            $(SRC_DIR)/server/database.cc \
            $(SRC_DIR)/common/io_util.cc \
            $(SRC_DIR)/common/path_util.cc \
			$(SRC_DIR)/common/atomic_file_output_stream.cc \
			$(SRC_DIR)/common/path_trie.cc \
			$(SRC_DIR)/common/string_util.cc \
			$(SRC_DIR)/quotas.cc \
			$(SRC_DIR)/watched_event.cc \
			$(SRC_DIR)/acl/acl_parser.cc \
			$(SRC_DIR)/commands/add_auth_cmd.cc \
			$(SRC_DIR)/commands/delete_cmd.cc \
			$(SRC_DIR)/commands/get_cmd.cc \
			$(SRC_DIR)/commands/stat_printer_cmd.cc \
			$(SRC_DIR)/commands/client_cmd.cc \
			$(SRC_DIR)/commands/delete_quota_cmd.cc \
			$(SRC_DIR)/commands/list_quota_cmd.cc \
			$(SRC_DIR)/commands/set_cmd.cc \
			$(SRC_DIR)/commands/sync_cmd.cc \
			$(SRC_DIR)/commands/close_cmd.cc \
			$(SRC_DIR)/commands/get_acl_cmd.cc \
			$(SRC_DIR)/commands/ls_cmd.cc \
			$(SRC_DIR)/commands/set_quota_cmd.cc \
			$(SRC_DIR)/commands/create_cmd.cc \
			$(SRC_DIR)/commands/get_cfg_cmd.cc \
			$(SRC_DIR)/commands/recfg_cmd.cc \
			$(SRC_DIR)/commands/stat_cmd.cc \
	
			

			

# define the C object files 
#
# This uses Suffix Replacement within a macro:
#   $(name:string1=string2)
#         For each word in 'name' replace 'string1' with 'string2'
# Below we are replacing the suffix .cc of all words in the macro SRCS
# with the .o suffix
#
OBJS = $(SRC_FILES:.$(SRC_EXT)=.o)

# define the executable file 
MAIN = shepherd

#
# The following part of the makefile is generic; it can be used to 
# build any executable just by changing the definitions above and by
# deleting dependencies appended to the file from 'make depend'
#

.PHONY: depend clean

all:    $(MAIN)
	@echo  $(MAIN) has been compiled.

$(MAIN): $(OBJS) 
	$(CC) $(CC_FLAGS) $(INCLUDES) -o $(MAIN) $(OBJS) $(LFLAGS) $(LIBS)

# this is a suffix replacement rule for building .o's from .cc's
# it uses automatic variables $<: the name of the prerequisite of
# the rule(a .c file) and $@: the name of the target of the rule (a .o file) 
# (see the gnu make manual section about automatic variables)
.cc.o:
	$(CC) $(CC_FLAGS) $(INCLUDES) -c $<  -o $@

clean:
	$(RM) $(SRC_DIR)/*.o \
    $(SRC_DIR)/server/*.o \
    $(SRC_DIR)/common/*.o \
	$(SRC_DIR)/acl/*.o \
	$(SRC_DIR)/commands/*.o \
	$(SRC_DIR)/communication/*.o \
    *~ $(MAIN)

depend: $(SRC_FILES)
	makedepend $(INCLUDES) $^


# DO NOT DELETE THIS LINE -- make depend needs it
