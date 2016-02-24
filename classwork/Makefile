rockpaperscissors:	rockpaperscissors.o scanner.o
	gcc -Wall -o rockpaperscissors rockpaperscissors.o scanner.o

scanner.o:	scanner.c scanner.h
	gcc -Wall -c scanner.c

rockpaperscissors.o:	rockpaperscissors.c scanner.h
	gcc -Wall -c rockpaperscissors.c

clean:
	rm -f *.o rockpaperscissors
