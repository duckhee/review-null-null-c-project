CC = gcc

SRCS = divisionCompile.c add.c

BUILD_DIR = buildDir

TARGET = ex0101DivisionCompile

C_EXTRA = add.h

C_INC = $(patsubst %,-I%, $(C_EXTRA))

COBJS = $(addprefix $(BUILD_DIR)/, $(SRCS:.c=.o))

C_FLAGS = -W -Wall

all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILD_DIR})

build: $(COBJS)
	$(CC) $(C_INC) $(C_FLAGS) -o $(BUILD_DIR)/$(TARGET) $^

$(COBJS): $(BUILD_DIR)/%.o : %.c
	$(CC) $(C_INC) $(C_FLAGS) -o $@ -c $<

clean:
	$(shell rm -rf ${BUILD_DIR})

.SUFFIXES: .c. .o
.PHONNY: clean createdirs build