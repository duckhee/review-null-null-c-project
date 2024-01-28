CC = gcc

SRCS = linuxThreadSync.c

BUILD_DIR = buildDir

TARGET = ex0201ThreadSync

C_EXTRA :=

C_MODULE := pthread

C_EXTRA += $(C_MODULE)


C_INC := $(patsubst %,-I%, $(C_EXTRA))

COBJS = $(addprefix $(BUILD_DIR)/, $(SRCS:.c=.o))

all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILD_DIR})

build: $(COBJS)
	$(CC) $(C_INC) $(CFLAGS) -o $(BUILD_DIR)/$(TARGET) $^

$(COBJS): $(BUILD_DIR)/%.o : %.c
	$(CC) $(C_INC) $(CFLAGS) -o $@ -c $<

clean:
	rm -rf ${BUILD_DIR}

.SUFFIXES: .c .o
.PHONNY: clean createdirs build