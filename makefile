all:sort


sort : swap.o bubble.o 
	gcc swap.o bubble.o -o sort.o
swap.o : swap.c
	gcc -c swap.c
bubble.o : bubble.c
	gcc -c bubble.c
