CFLAGS= -std=c++23 -Wall -Wextra -O3 -g
LDFLAGS = -lm
BINDIR = bin/
CC= g++



weird: weird.cpp
	$(CC) $(CFLAGS) -o $(BINDIR)weird weird.cpp

incarray: incarray.cpp
	$(CC) $(CFLAGS) -o $(BINDIR)incarray incarray.cpp