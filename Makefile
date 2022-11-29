CC = gcc
MAIN = arrayMemoryLeak
AR = ar
FLAGS = -Wall -g
OBJECCTS_MAIN = main.o 
OBJECTS_MAT = my_mat.o

all: libmy_mat.so libmy_mat.a progmaind progmains

libmy_mat.so: $(OBJECTS_MAT)
	$(CC) -shared -o libmy_mat.so $(OBJECTS_MAT) ./libmy_mat.so

libmy_mat.a: $(OBJECTS_MAT)
	$(AR) -rsc libmy_mat.a $(OBJECTS_MAT)


my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c 

valgrind:
	valgrind --leak-check=full ./$(MAIN)


.PHONY: clean all

clean:
	rm -f *.o *.a *.so progmains progmaind