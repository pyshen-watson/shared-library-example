lib_angle.so: angle.o
	gcc angle.o -shared -o lib_angle.so
	rm -f *.o

angle.o: angle.c
	gcc -c angle.c -fpic

clean:
	rm -f *.o *.so