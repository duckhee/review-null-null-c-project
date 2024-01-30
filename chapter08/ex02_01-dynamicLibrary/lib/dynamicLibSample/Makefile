CC = gcc


SRCS =
SRCS += $(C_SOURCES)
# sub folder setting
SUB_DIRS :=

SUB_DIRS += Src

# SUB_DIR addprefix Setting
SUB_DIRS := $(addprefix ./,$(SUB_DIRS))

# Source File add compling
vpath %.c $(SUB_DIRS)


sinclude $(addsuffix /Makefile, $(SUB_DIRS))

BUILD_DIR = buildDir

TARGET = addLib

# 라이브러리의 이름의 시작은 lib으로 시작해야한다.
#LIBRARY_NAME = libDynamicAdd.so
LIBRARY_NAME = libDynamicAdd.dylib

C_MODULE :=

C_EXTRA :=
C_EXTRA += $(C_MODULE)
C_EXTRA += $(EXTRAINCDIRS)

# -fPIC 이라는 옵션. 여기서 “PIC”란 “Position Independent Code”를 뜻하는 약자로, 메모리 주소와 상관없이 호출될 수 있는 바이너리 오브젝트 파일을 생성할 때 사용되는 옵션이다.
# 일반적으로 Linux와 같은 운영체제에서 실행되는 User Application들은 매번 실행될 때마다 메모리에 로딩(Loading)되는 주소 값이 바뀌게 되므로, 실행될 때마다 호출될 Shared Library는 이와 상관없이 호출될 수 있도록 컴파일할 때 반드시 “-fPIC” 옵션을 줘야 함
CFLAGS = -fPIC

C_INC = $(patsubst %,-I%, $(C_EXTRA))

COBJS = $(addprefix $(BUILD_DIR)/, $(SRCS:.c=.o))

all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILD_DIR})

# 동적 라이브러리로 만들어주는 -shared
build: $(COBJS)
	$(CC) -shared -o $(BUILD_DIR)/$(LIBRARY_NAME) $^


$(COBJS): $(BUILD_DIR)/%.o : %.c
	$(CC) $(C_INC)  $(CFLAGS)  -o $@ -c $<

clean:
	rm -rf ${BUILD_DIR}

.SUFFIXES: .c. o
.PHONNY: clean createdirs build