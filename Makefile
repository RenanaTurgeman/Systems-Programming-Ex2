CC = gcc
MAIN = arrayMemoryLeak
AR = ar
FLAGS = -Wall -g
OBJECCTS_MAIN = main.o 
OBJECTS_MAT = my_mat.o

all: libmy_mat.a connections 

connections: $(OBJECCTS_MAIN) libmy_mat.a
	$(CC) $(FLAGS) -o connections $(OBJECCTS_MAIN) libmy_mat.a -lm

libmy_mat.a: $(OBJECTS_MAT)
	$(AR) -rsc libmy_mat.a $(OBJECTS_MAT)

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c 

.PHONY: clean all

clean:
	rm -f *.o *.a *.so connections