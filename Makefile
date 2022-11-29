CC= gcc
MAIN = arrayMemoryLeak
FLAGS = -Wall -g


valgrind:
	valgrind --leak-check=full ./$(MAIN)


.PHONY: clean all

clean:
	rm -f *.o *.a *.so 