all:Thread

CC=g++
CPPFLAGS=-Wall -std=c++11 -ggdb
LDFLAGS=-pthread

Thread:helloworld.o
	$(CC) $(LDFLAGS) -o $@ $^

helloworld.o:helloworld.cpp
	$(CC) $(CPPFLAGS) -o $@ -c $^


.PHONY:
	clean

clean:
	rm helloworld.o Thread