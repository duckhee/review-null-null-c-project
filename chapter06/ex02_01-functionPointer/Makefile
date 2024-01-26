CC = gcc

SRCS = functionPointer.c

BUILD_DIR = build

TARGET = ex0201FunctionPointer

C_EXTRA =

C_INC = $(patsubst %,-I%, $(C_EXTRA))

CFLAGS =

COBJS = $(addprefix $(BUILD_DIR)/, $(SRCS:.c=.o))

all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILD_DIR})

build: $(COBJS)
	$(CC) $(C_INC) $(CFLAGS) -o $(BUILD_DIR)/$(TARGET) $^

$(COBJS): $(BUILD_DIR)/%.o : %.c
	$(CC) $(C_INC) $(CFLAGS) -o $@ -c $<

clean:
	$(shell rm -rf ${BUILD_DIR})

.SUFFIXES: .c .o
.PHONNY: clean createdirs build