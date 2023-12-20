CC = g++
CCFLAGS = -g -std=c++17 -Wall -Werror -Wextra
LDFLAGS = -lstdc++ -lgtest -fprofile-arcs -ftest-coverage
PROJECTDIR = .
EXECUTABLE = test.out

HEADERS = \
  	$(PROJECTDIR)/task01.h \
  	$(PROJECTDIR)/task02.h \
  	$(PROJECTDIR)/task03.h \
  	$(PROJECTDIR)/task04.h \
	$(PROJECTDIR)/task05.h \
	$(PROJECTDIR)/task06.h \
  	$(PROJECTDIR)./gtest/gtest.h


SOURCES = \
  	$(PROJECTDIR)/task01.cpp \
  	$(PROJECTDIR)/task02.cpp \
 	$(PROJECTDIR)/task03.cpp \
  	$(PROJECTDIR)/task04.cpp \
	$(PROJECTDIR)/task05.cpp \
	$(PROJECTDIR)/task06.cpp \
  	$(PROJECTDIR)/tests.cpp

OBJECTS = $(SOURCES:.cpp=.o)
GCDA = $(SOURCES:.cpp=.gcda)
GCNO = $(SOURCES:.cpp=.gcno)

all: test check c

test: $(SOURCES) $(EXECUTABLE)

check:
	python3 ../cpplint.py $(SOURCES)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) $(HEADERS) -o $@ $(LDFLAGS)
	./$(EXECUTABLE) 

%.o: %.cpp
	$(CC) $(CCFLAGS) -o $@ -c $< $(LDFLAGS)

gcov_report: $(EXECUTABLE)
	./$(EXECUTABLE)
	lcov -t "./test.out" -o test.info --no-external -c -d .
	genhtml -o report test.info
	open report/index.html

.PHONY: c
r: c test check cl
c:
	@rm -rf $(OBJECTS)
	@rm -rf $(EXECUTABLE)
	@rm -rf *.gcno $(GCDA) $(GCNO) *.info
cl:
	@rm -rf $(OBJECTS)
	@rm -rf $(EXECUTABLE)
	@rm -rf *.gcno $(GCDA) $(GCNO) *.info