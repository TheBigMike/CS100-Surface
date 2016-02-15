#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	if (argc != 2) {
		printf("Usage : ../a.out word\n");
		exit(1);
	}
	if ( hasVowel(argv[1]) )
		printf("That is a legal word - it has at least one vowel in it\n");
	else
		printf("That is not a legal word - it has no vowels\n");
	return 0;
}

hasVowel(char *str) { 

	// the initial way to check - be very obvious about everything
	char *ptr;
	ptr = strchr(str, 'a');
	if ( ptr != NULL ) return 1;

	// don't need a variable,  just look at what the function returns
	if ( strchr(str, 'e') != NULL) return 1;

	// realize that you don't need the equality test (NULL is false)
	if ( strchr(str,'i') ) return 1;

	// combine more on a single line
	if ( strchr(str,'o') || strchr(str,'u') ) return 1;

	// handle uppper-case letters
	if ( strchr(str,'A') || strchr(str,'E') || strchr(str,'A') || strchr(str,'E') ||
			strchr(str,'U') ) return 1;

	return 0;

}
