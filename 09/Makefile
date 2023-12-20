CC = g++
CFLAGS = -std=c++11

SRCS = task01.cpp task02.cpp task03.cpp
OBJS = $(SRCS:.cpp=.out)

.PHONY: all clean

all: $(OBJS)

%.out: %.cpp
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJS)