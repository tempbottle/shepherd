#executable 
SHEPHERD=shepherd

#home dir
SHEPHERD_DIR=.

#headers 
SHEPHERD_HEADERS=$(SHEPHERD_DIR)/include/shepherd/*.h

#sources
#KD_SRC = $(KD_DIR)/src/*.cc $(KD_DIR)/src/*.h $(KD_HEADERS)

SHEPHERD_SRC = $(SHEPHERD_DIR)/src/*.cc 
#$(SHEPHERD_HEADERS)


OBJECTS=$(SHEPHERD_SRC:.cc=.o)


#compiler
CC=clang++

#compiler flags
CC_FLAGS= -Wall -pthread -std=c++11


all:shepherd

shepherd: shepherd.o shepherd-main.o
	$(CC) shepherd-main.o shepherd.o  -o shepherd

shepherd.o: $(SHEPHERD_DIR)/src/shepherd.cc $(SHEPHERD_HEADERS) 
	$(CC) $(CC_FLAGS) -c $(SHEPHERD_DIR)/src/shepherd.cc 

shepherd-main.o: $(SHEPHERD_DIR)/src/shepherd-main.cc $(SHEPHERD_HEADERS)
	$(CC) $(CC_FLAGS) -c $(SHEPHERD_DIR)/src/shepherd-main.cc 



clean: 
	rm -rf $(SHEPHERD) *.a *.o



#all:$(SHEPHERD_SRC) $(SHEPHERD)

#$(SHEPHERD):$(OBJECTS) 
#	$(CC) $(OBJECTS) -o $@

#.cc.o:
#	$(CC) $(CC_FLAGS) $< -o $@


#shepherd.o: $(SHEPHERD_SRC) 
#		$(CC) $(CC_FLAGS) -I$(SHEPHERD_DIR) -c \
#		$(SHEPHERD_DIR)/src/shepherd.cc

#shepherd-main.o:  $(SHEPHERD_SRC) 
#		$(CC) $(CC_FLAGS) $(SHEPHERD_DIR)/src/shepherd-main.cc

#$(KD):shepherd.o shepherd-main.o 
#	$(CC) $(CC_FLAGS) -o $(SHEPHERD)

#clean: 
#	rm -rf $(SHEPHERD) *.a *.o
