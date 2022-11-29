CC= gcc
MAIN = arrayMemoryLeak
FLAGS = -Wall -g


valgrind:
	valgrind --leak-check=full ./$(MAIN)