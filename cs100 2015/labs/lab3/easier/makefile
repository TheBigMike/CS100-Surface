proggy:		lib1.o lib3.o linked.o
		gcc lib1.o lib3.o linked.c -o proggy

lib1.o:		lib1.c lib1.h
		gcc -Wall -g -c lib1.c

lib3.o:		lib3.c lib3.h
		gcc -Wall -g -c lib3.c

linked.o:	linked.c
		gcc -Wall -g -c linked.c

clean:
		rm lib1.o lib3.o linked.o proggy
