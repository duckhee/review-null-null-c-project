CC = gcc

AR = ar

# https://velog.io/@hidaehyunlee/Makefile-%EC%9E%90%EC%A3%BC-%EC%82%AC%EC%9A%A9%ED%95%98%EB%8A%94-%EB%AC%B8%EB%B2%95-%EC%A0%95%EB%A6%AC
# r : 새로운 오브젝트 파일이면 추가, 기존 파일이면 치환
# c : 아카이브(라이브러리 파일) 생성, 존재하지 않는 아카이브를 작성(또는 갱신)하는 경우에도 경고 메시지를 출력하지 않음
# u : 오브젝트 파일의 타임스탬프를 비교해 새로운 파일일 경우에만 치환
# s : ranlib(1)과 마찬가지로 아카이브 인덱스 생성. 아카이브 인덱스를 생성하지 않으면 링크 속도가 느려지고, 시스템 환경에 따라 에러가 발생할 수도 있음
AR_FLAGS = rcus

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

C_MODULE :=

C_EXTRA :=
C_EXTRA += $(C_MODULE)
C_EXTRA += $(EXTRAINCDIRS)


C_INC = $(patsubst %,-I%, $(C_EXTRA))

COBJS = $(addprefix $(BUILD_DIR)/, $(SRCS:.c=.o))

all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILD_DIR})


build: $(COBJS)
	$(AR) $(AR_FLAGS) $(BUILD_DIR)/libAdd.a $^


$(COBJS): $(BUILD_DIR)/%.o : %.c
	$(CC) $(C_INC) -o $@ -c $<

clean:
	rm -rf ${BUILD_DIR}

.SUFFIXES: .c. o
.PHONNY: clean createdirs build