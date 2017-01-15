
#
# Linux Makefile.
#



#------------------------------- DEFINE -------------------------------
CC = gcc
CFLAGS = -std=gnu++11 -D_DEBUG -ggdb -O0 -Wall -Wextra -D_REENTRANT -D_FILE_OFFSET_BITS=64

CXX = g++
CXXFLAGS = -std=gnu++11 -D_DEBUG -ggdb -O0 -Wall -Wextra -D_REENTRANT -D_FILE_OFFSET_BITS=64

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
CORE_INCS += -I$(PROJ_DIR)/deps/gtest/googletest-release-1.8.0/googletest/include
CORE_INCS += -I$(PROJ_DIR)/deps/gtest/googletest-release-1.8.0/googletest/include/internal

LIBS_LOCS += -L$(PROJ_DIR)/deps/gtest/googletest-release-1.8.0/googletest/make
LIBS      += -Wl,-Bstatic -lexpat -lreadline -lncurses
LIBS      += -Wl,-Bdynamic -lpthread -lbz2 -lz -lrt -lm -lc -ldl
GTEST_LIB += $(PROJ_DIR)/deps/gtest/googletest-release-1.8.0/googletest/make/gtest.a
GTEST_LIB += $(PROJ_DIR)/deps/gtest/googletest-release-1.8.0/googletest/make/gtest_main.a

DEMO_OBJS  = $(BOOST_OBJS_DIR)/lexical.o $(OBJS_DIR)/demo_blue.o
DEMO_EXE   = $(PROJ_DIR)/demo_blue

GTEST_OBJS = $(PRIMER_OBJS_DIR)/addval.o $(PRIMER_OBJS_DIR)/stack4.o \
			 $(PRIMER_OBJS_DIR)/stack3.o $(PRIMER_OBJS_DIR)/stack2.o \
			 $(PRIMER_OBJS_DIR)/stack1.o $(PRIMER_OBJS_DIR)/max4.o \
			 $(PRIMER_OBJS_DIR)/max3.o $(PRIMER_OBJS_DIR)/max2.o \
			 $(PRIMER_OBJS_DIR)/max.o $(PRIMER_OBJS_DIR)/abs.o \
			 $(OBJS_DIR)/template_test.o $(OBJS_DIR)/gtest_blue.o
GTEST_EXE  = $(PROJ_DIR)/gtest_blue



#------------------------------- ALL -------------------------------
all:  clean makedir demo

test: clean makedir gtest



#------------------------------- OBJS -------------------------------
$(OBJS_DIR)/demo_blue.o:$(PROJ_DIR)/demo_blue.cpp
	$(CXX) -c $(CXXFLAGS) $(CORE_INCS) -o $@ $<

$(BOOST_OBJS_DIR)/lexical.o:$(BOOST_DIR)/lexical.cpp
	$(CXX) -c $(CXXFLAGS) $(CORE_INCS) -o $@ $<

$(OBJS_DIR)/template_test.o:$(PROJ_DIR)/template_test.cpp
	$(CXX) -c $(CXXFLAGS) $(CORE_INCS) -o $@ $<

$(OBJS_DIR)/gtest_blue.o:$(PROJ_DIR)/gtest_blue.cpp
	$(CXX) -c $(CXXFLAGS) $(CORE_INCS) -o $@ $<

$(PRIMER_OBJS_DIR)/abs.o:$(PRIMER_DIR)/abs.cpp
	$(CXX) -c $(CXXFLAGS) $(CORE_INCS) -o $@ $<

$(PRIMER_OBJS_DIR)/max.o:$(PRIMER_DIR)/max.cc
	$(CXX) -c $(CXXFLAGS) $(CORE_INCS) -o $@ $<

$(PRIMER_OBJS_DIR)/max2.o:$(PRIMER_DIR)/max2.cc
	$(CXX) -c $(CXXFLAGS) $(CORE_INCS) -o $@ $<

$(PRIMER_OBJS_DIR)/max3.o:$(PRIMER_DIR)/max3.cc
	$(CXX) -c $(CXXFLAGS) $(CORE_INCS) -o $@ $<

$(PRIMER_OBJS_DIR)/max4.o:$(PRIMER_DIR)/max4.cc
	$(CXX) -c $(CXXFLAGS) $(CORE_INCS) -o $@ $<

$(PRIMER_OBJS_DIR)/stack1.o:$(PRIMER_DIR)/stack1.cc
	$(CXX) -c $(CXXFLAGS) $(CORE_INCS) -o $@ $<

$(PRIMER_OBJS_DIR)/stack2.o:$(PRIMER_DIR)/stack2.cpp
	$(CXX) -c $(CXXFLAGS) $(CORE_INCS) -o $@ $<

$(PRIMER_OBJS_DIR)/stack3.o:$(PRIMER_DIR)/stack3.cc
	$(CXX) -c $(CXXFLAGS) $(CORE_INCS) -o $@ $<

$(PRIMER_OBJS_DIR)/stack4.o:$(PRIMER_DIR)/stack4.cc
	$(CXX) -c $(CXXFLAGS) $(CORE_INCS) -o $@ $<
	
$(PRIMER_OBJS_DIR)/addval.o:$(PRIMER_DIR)/addval.cpp
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
