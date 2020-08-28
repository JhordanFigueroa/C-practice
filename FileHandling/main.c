#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MAXSTRLEN 200
#define FILENAME "test.txt"

void readlines() {
	FILE *fp = fopen(FILENAME, "r"); //need to open the file according to the type of file binary, text, r/w
    //returns a pointer to that file - fp 
	char line[MAXSTRLEN];
	if (fp != 0) {
		while (fgets(line, sizeof(line), fp) != 0) {
			fputs(line, stdout);
		}
		fclose(fp);
	} else {
		printf("File %s cannot be opened!", FILENAME);
	}
}

void writelines() {
	FILE *fp;
	fp = fopen(FILENAME, "w");
	fputs("Hello world\n", fp);
	fputs("Goodbye Mars\n", fp);
    fputs("Aloha From Hawaii\n", fp); 
	fclose(fp);
}

void clearfile() {
	FILE *fp;
	fp = fopen(FILENAME, "w");
	fclose(fp);
}

void deletefile() {
	if (remove(FILENAME) == 0) {
		printf("%s file deleted.\n", FILENAME);
	} else {
		printf("Unable to delete the file: %s.\n", FILENAME);
	}
}

int main(int argc, char **argv) {
	//deletefile();
	//clearfile();
	writelines();
	readlines();
	return 0;
}
