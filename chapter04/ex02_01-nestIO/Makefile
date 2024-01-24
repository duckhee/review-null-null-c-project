CC = gcc

SRCS = nestIO.c

BUILD_DIR = buildDir

TARGET = ex0201NestIO

COBJS = $(addprefix $(BUILD_DIR)/, $(SRCS:.c=.o))

C_EXTRA =

C_INC =  $(patsubst %,-I%, $(C_EXTRA))

all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILD_DIR})

build: $(COBJS)
	$(CC) $(C_INC) -o $(BUILD_DIR)/$(TARGET) $^

$(COBJS): $(BUILD_DIR)/%.o : %.c
	$(CC) $(C_INC) -o $@ -c $<

clean:
	$(shell rm -rf ${BUILD_DIR})

.SUFFIXES: .c .o
.PHONNY: clean createdirs build