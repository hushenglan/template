
#
# Linux Makefile.
#



#------------------------------- DEFINE -------------------------------
CC = gcc
CFLAGS = -ggdb -O0 -Wall -D_REENTRANT -D_POSIX_C_SOURCE=200112L  -D_FILE_OFFSET_BITS=64 -D_DEBUG

CXX = g++
CXXFLAGS = -ggdb -O0 -Wall -D_REENTRANT -D_POSIX_C_SOURCE=200112L -D_FILE_OFFSET_BITS=64 -D_DEBUG

AR = ar
ARFLAGS = -rvl
LINK = $(CXX)

PROJ_DIR  = .
OBJ_DIR = $(PROJ_DIR)/objs

CORE_INCS += -I$(PROJ_DIR)
CORE_INCS += -I$(PROJ_DIR)/deps/gtest/gtest-1.6.0-rc/gtest-1.6.0/include
LIBS_INCS += -L$(PROJ_DIR)/deps/gtest/gtest-1.6.0-rc/gtest-1.6.0/lib/.libs
LIBS      += -Wl,-Bstatic -lexpat -lreadline -lncurses
LIBS      += -Wl,-Bdynamic -lpthread -lbz2 -lz -lrt -lm -lc -ldl
GTEST_LIBS = $(PROJ_DIR)/deps/gtest/gtest-1.6.0-rc/gtest-1.6.0/lib/.libs/libgtest.a

DEMO_OBJS  = $(OBJ_DIR)/demo.o
DEMO_EXE   = $(PROJ_DIR)/demo

GTEST_OBJS = $(OBJ_DIR)/gtest_demo.o
GTEST_EXE  = $(PROJ_DIR)/gtest_demo



#------------------------------- ALL -------------------------------
all: makedir demo

test:makedir gtest



#------------------------------- OBJS -------------------------------
$(OBJ_DIR)/demo.o:$(PROJ_DIR)/demo.cpp
	$(CXX) -c $(CXXFLAGS) $(CORE_INCS) -o $@ $<


demo: $(DEMO_OBJS)
	@echo
	@echo ----------------------------- compile finish, then link -----------------------------
	@echo
	$(LINK) -o $(DEMO_EXE) $(DEMO_OBJS) $(LIBS_INCS) $(LIBS)


gtest: $(GTEST_OBJS)
	@echo
	@echo ----------------------------- compile finish, then link -----------------------------
	@echo
	$(LINK) -o $(GTEST_EXE) $(GTEST_OBJS) $(LIBS_INCS) $(LIBS) $(GTEST_LIBS)



#------------------------------- CLEAN -------------------------------
clean:
	rm -fr $(OBJ_DIR) $(DEMO_EXE) $(GTEST_EXE)



#------------------------------- MKDIR -------------------------------
makedir:
	mkdir -p $(OBJ_DIR)
