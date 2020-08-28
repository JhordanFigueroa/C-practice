#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void readin(char *filename) {
	FILE *f;
	long size;
	char *b;
	size_t items_read;  				// size_t is a long unsigned int
	int linecount;
	int i;
	linecount = 0;
	f = fopen(filename, "rb");			// open file read only in binary mode
	if (f == 0) {						// get out if no good
		printf("Cannot open '%s'\n", filename);
	} else {
		fseek(f, 0, SEEK_END);			// seek to end of file
		size = ftell(f);				// get the current position (now at the end of the file)
		rewind(f);						// move the seek pointer to the start
		b = (char*)malloc(size);		// alloc some memory - size tells the length of the file , casted to char* bc that's the type of b 
		items_read = fread(b, 1, size, f);		// read the lot in
		fclose(f);						// close it
		for (i = 0; i < size; i++) {
			if (b[i] == '\n') {
				linecount++;
			}
		}
		printf("number of lines was %d with %d chars (%zu items read).\n", linecount, i, items_read);
		free(b); //frees up the memory taken up by b with malloc. NEED TO DO THIS EVERY TIME!!

        //Memory Leaks - when you don't have a pointer to the original variable and can't clear it or end it 
        //Garbage Collection - can slow down programs, in C you have to manage memeory yourself and free up memory that is no longer needed. C can have faster programs but it puts more emphasis on the programmer 
        //Type Casts: for it to be valid - type casts have to be compatiable 
	}
}


// int main(int argc, char **argv) {
// 	readin("sonnet.txt");
// 	return 0;
// }

//Casting
int main(int argc, char **argv) {
    int x = 13;
    int y = 3;
    double result; 
    result = (double) x / y;
    printf("result = %f, %d\n", result, (int) result);
    return 0;
}

