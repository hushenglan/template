
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

PRIMER_MODULE_NAME = primer
BOOST_MODULE_NAME = boost

PROJ_DIR = .
PRIMER_DIR = $(PROJ_DIR)/$(PRIMER_MODULE_NAME)
BOOST_DIR = $(PROJ_DIR)/$(BOOST_MODULE_NAME)

OBJS_DIR = $(PROJ_DIR)/objs
PRIMER_OBJS_DIR = $(OBJS_DIR)/$(PRIMER_MODULE_NAME)
BOOST_OBJS_DIR = $(OBJS_DIR)/$(BOOST_MODULE_NAME)

CORE_INCS += -I$(PROJ_DIR)
CORE_INCS += -I$(PRIMER_DIR)
CORE_INCS += -I$(BOOST_DIR)
CORE_INCS += -I$(PROJ_DIR)/deps/gtest/gtest-1.6.0-rc/gtest-1.6.0/include

LIBS_LOCS += -L$(PROJ_DIR)/deps/gtest/gtest-1.6.0-rc/gtest-1.6.0/lib/.libs
LIBS      += -Wl,-Bstatic -lexpat -lreadline -lncurses
LIBS      += -Wl,-Bdynamic -lpthread -lbz2 -lz -lrt -lm -lc -ldl
GTEST_LIB  = $(PROJ_DIR)/deps/gtest/gtest-1.6.0-rc/gtest-1.6.0/lib/.libs/libgtest.a

DEMO_OBJS  = $(OBJS_DIR)/demo_main.o $(BOOST_OBJS_DIR)/lexical.o
DEMO_EXE   = $(PROJ_DIR)/demo_main

GTEST_OBJS = $(OBJS_DIR)/gtest_demo.o $(OBJS_DIR)/gtest_main.o
GTEST_EXE  = $(PROJ_DIR)/gtest_main



#------------------------------- ALL -------------------------------
all:  clean makedir demo

test: clean makedir gtest



#------------------------------- OBJS -------------------------------
$(OBJS_DIR)/demo_main.o:$(PROJ_DIR)/demo_main.cpp
	$(CXX) -c $(CXXFLAGS) $(CORE_INCS) -o $@ $<

$(BOOST_OBJS_DIR)/lexical.o:$(BOOST_DIR)/lexical.cpp
	$(CXX) -c $(CXXFLAGS) $(CORE_INCS) -o $@ $<

$(OBJS_DIR)/gtest_demo.o:$(PROJ_DIR)/gtest_demo.cpp
	$(CXX) -c $(CXXFLAGS) $(CORE_INCS) -o $@ $<

$(OBJS_DIR)/gtest_main.o:$(PROJ_DIR)/gtest_main.cpp
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
	mkdir -p $(PRIMER_OBJS_DIR)
	mkdir -p $(BOOST_OBJS_DIR)



#------------------------------- UNPACK -------------------------------
unpack:
	sh $(PROJ_DIR)/unpack.sh
