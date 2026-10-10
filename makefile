abc.exe:add.o eo.o main.o
	gcc -o abc.exe add.o eo.o main.o
add.o:add.c
	gcc -c add.c
eo.o:eo.c
	gcc -c eo.c
main.o:main.c
	gcc -c main.c
