
CROSS = 

CC=$(CROSS)gcc
CXX	=	$(CROSS)g++

CFLAGS	=	-Wall -g -O
CXXFLAGS = -Wall -g -O 
RM = rm -f
MV = mv

LIB_PATH =	-L ../common_file/lib
INCLUDE_PATH = -I ../common_file/include/
BUILD_PATH = ./

LIBS	=	-lapue
TARGET	=	test.out

vpath	%.h ./

OBJS	=	1.7.o
SRCS	=	1.7.c

$(TARGET):$(OBJS)
	$(CC) $(CFLAGS) $< -o $(TARGET)  $(LIB_PATH) $(LIBS) 
#	$(MV) $(TARGET) $(BUILD_PATH)
#	$(RM) $(OBJS)
$(OBJS):$(SRCS)
	$(CC) $(CFLAGS)  $(INCLUDE_PATH) -c $^  


clean:
	$(RM) *.o $(TARGET)
