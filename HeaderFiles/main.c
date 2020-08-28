/*
Stage 1: Preprocessor 
Stage 2: Compiler 
Stage 3: The linker 
*/

#include <stdio.h> //standard library files with common c compilers
#include "mystring.h" //this would be a header file that I have developed. 

char b[BUFSIZE];
char teststring[] = "Hello world";

int main(int argc, char **argv) {
	int i;
	int stringpos;

	printf("starting...\n");
	i = readln(b, sizeof(b));
	printf("b=%s; i=%d\n", b, i);
	stringpos = searchstring(b, teststring);
	if (stringpos > -1) {
		printf("'%s' found in '%s' at index #%d\n", b, teststring, stringpos);
	} else {
		printf("'%s' not found in '%s'\n", b, teststring);
	}
	return 0;
}

