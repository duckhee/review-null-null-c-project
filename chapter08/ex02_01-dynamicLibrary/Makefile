CC = gcc

SRCS =
SRCS += $(C_SOURCES)

SUB_DIR :=
SUB_DIR += src

SUB_DIRS := $(addprefix ./,$(SUB_DIRS))


vpath %.c $(SUB_DIR)

sinclude $(addsuffix /Makefile, $(SUB_DIR))

BUILD_DIR = buildDir

TARGET = ex0101Library


C_MODULE :=

#C_MODULE += static_add

C_EXTRA :=
C_EXTRA += $(C_MODULE)
C_EXTRA += ./lib/dynamicLibSample/Inc

LIBS :=
# 라이브러리 파일의 시작은 lib으로 시작해야한다.
# 경로를 os에 알려주기 위해서 설정이 필요 -> https://jeongchul.tistory.com/109
LIBS += -lDynamicAdd -L ./lib/dynamicLibSample/buildDir

C_INC = $(patsubst %,-I%, $(C_EXTRA)) $(LIBS)

COBJS = $(addprefix $(BUILD_DIR)/, $(SRCS:.c=.o))

all: clean createdirs build

createdirs:

	$(shell mkdir ${BUILD_DIR})

build: $(COBJS)
	$(CC) $(C_INC) -o $(BUILD_DIR)/$(TARGET) $^

$(COBJS): $(BUILD_DIR)/%.o : %.c
	$(CC) $(C_INC) -o $@ -c $<

clean:
	rm -rf ${BUILD_DIR}

#.SUFFIXES: .c .o .a
#.PHONNY: clean createdirs build