
#
# Linux Makefile.
#



#------------------------------- DEFINE -------------------------------
CC = gcc
CFLAGS = -ggdb -O0 -Wall -D_REENTRANT -D_POSIX_C_SOURCE=200112L -D_FILE_OFFSET_BITS=64 -D_DEBUG

CXX = g++
CXXFLAGS = -ggdb -O0 -Wall -D_REENTRANT -D_POSIX_C_SOURCE=200112L -D_FILE_OFFSET_BITS=64 -D_DEBUG

AR      = ar
ARFLAGS = -rvl
LINK    = $(CXX)

PROJ_DIR = .
OBJS_DIR = $(PROJ_DIR)/objs

CORE_INCS += -I$(PROJ_DIR)
CORE_INCS += -I$(PROJ_DIR)/primer
CORE_INCS += -I$(PROJ_DIR)/deps/gtest/gtest-1.6.0-rc/gtest-1.6.0/include

LIBS_LOCS += -L$(PROJ_DIR)/deps/gtest/gtest-1.6.0-rc/gtest-1.6.0/lib/.libs
LIBS      += -Wl,-Bstatic -lexpat -lreadline -lncurses
LIBS      += -Wl,-Bdynamic -lpthread -lbz2 -lz -lrt -lm -lc -ldl
GTEST_LIB  = $(PROJ_DIR)/deps/gtest/gtest-1.6.0-rc/gtest-1.6.0/lib/.libs/libgtest.a

DEMO_OBJS  = $(OBJS_DIR)/demo.o
DEMO_EXE   = $(PROJ_DIR)/demo

GTEST_OBJS = $(OBJS_DIR)/gtest_demo.o
GTEST_EXE  = $(PROJ_DIR)/gtest_demo



#------------------------------- ALL -------------------------------
all:  clean makedir demo

test: clean makedir gtest



#------------------------------- OBJS -------------------------------
$(OBJS_DIR)/demo.o:$(PROJ_DIR)/demo.cpp
	$(CXX) -c $(CXXFLAGS) $(CORE_INCS) -o $@ $<


demo: $(DEMO_OBJS)
	@echo
	@echo ----------------------------- compile finish, then link -----------------------------
	@echo
	$(LINK) -o $(DEMO_EXE) $(DEMO_OBJS) $(LIBS_LOCS) $(LIBS)


gtest: $(GTEST_OBJS)
	@echo
	@echo ----------------------------- compile finish, then link -----------------------------
	@echo
	$(LINK) -o $(GTEST_EXE) $(GTEST_OBJS) $(LIBS_LOCS) $(LIBS) $(GTEST_LIB)



#------------------------------- CLEAN -------------------------------
clean:
	rm -fr $(OBJS_DIR) $(DEMO_EXE) $(GTEST_EXE)



#------------------------------- MKDIR -------------------------------
makedir:
	mkdir -p $(OBJS_DIR)
