CC = gcc

SRCS = parameterSender.c

BUILD_DIR = buildDir

TARGET = ex0201ParameterSender

COBJS = $(addprefix $(BUILD_DIR)/, $(SRCS:.c=.o))

C_EXTRA =

C_INC = $(patsubst %,-I%, $(C_EXTRA))

# stack size 변경 -> linux 계열에서는 동작이 안된다.
# -Wl, --heap, <heap size>, --stack, <stack size>

C_FLAGS = -W -Wall -Wextra -v
#C_FLAGS += -W -Wall,-z,--stack,1048576 -v
LDFLAGS = -Wl,--stack,1048576

all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILD_DIR})

#build: $(COBJS)
#	$(CC) $(C_FLAGS) -o $(BUILD_DIR)/$(TARGET) $^ $(LDFLAGS)

build: $(COBJS)
	$(CC) -o $(BUILD_DIR)/$(TARGET) $^

$(COBJS): $(BUILD_DIR)/%.o : %.c
	$(CC) $(C_FLAGS) -o $@ -c $<

clean:
	$(shell rm -rf ${BUILD_DIR})

.SUFFIXES: .c .o
.PHONNY: clean createdirs build