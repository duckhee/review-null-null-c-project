CC = gcc

SRCS = compilerOptimization.c

BUILD_DIR = build

TARGET = ex0301CompilerOptimization

COBJS = $(addprefix $(BUILD_DIR)/, $(SRCS:.c=.o))

all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILD_DIR})

build: $(COBJS)
	$(CC) -o $(BUILD_DIR)/$(TARGET) $^

$(COBJS): $(BUILD_DIR)/%.o : %.c
	$(CC) -o $(BUILD_DIR)/$(TARGET) $^

clean:
	$(shell rm -rf ${BUILD_DIR})

.SUFFIXES: .c .o
.PHONNY: clean createdirs build