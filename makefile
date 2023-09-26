all: main.o lib_angle.so
	gcc -o main main.o -L./lib -l_angle
	rm -f *.o

main.o: main.c
	gcc -c main.c -o main.o

lib_angle.so:
	make -C lib

clean:
	make -C lib clean
	rm -f main