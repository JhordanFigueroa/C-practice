#include <stdio.h>
/*
The readln() function reads chars up to length defined by STRLEN
It truncates strings that are longer. It avoids the problems
found when using fgets() with strings that are shorter.
*/

#define STRLEN 5

/*
// My first attempt!!!

int readln(char s[], int maxlen) { //s is an array 
int len_s;
fgets(s, maxlen, stdin); //Gets the input string from the user 
len_s = strlen(s); //Gets the length of the string
if (s[len_s - 1] == '\n') { //tests if the last position of the string is a new line character - \n
s[len_s - 1] = '\0'; //if so it replaces that new line character with a null character \0 - null character is used in c to indicate //the end of a string
len_s -= 1;
}
rewind(stdin); // This flushes the keyboard buffer (on Windows anyway!)
return len_s;
}
*/

int readln(char s[], int maxlen) {
	char ch;
	int i;
	int chars_remain;
	i = 0;
	chars_remain = 1; //In C 1 = True, 0 = False when being tested in a loop
	while (chars_remain) {
		ch = getchar(); //gets next individual character one by one
		if ((ch == '\n') || (ch == EOF)) {
			chars_remain = 0;
		} else if (i < maxlen - 1) { //1 is subtracted from maxlen to allow for the terminating null character 
			s[i] = ch;
			i++;
		}
	}
	s[i] = '\0'; //the null character (\0) is put at the end of the string to signify the end of the string 
	return i;
}

int main(int argc, char **argv) {
	char firstname[STRLEN];
	char lastname[STRLEN];
	int len_firstname;
	int len_lastname;
	printf("Enter your first name:");
	len_firstname = readln(firstname, STRLEN);
	printf("Enter your last name:");
	len_lastname = readln(lastname, STRLEN);
	printf("Hello, %s, %s\n", firstname, lastname);
	printf("Length of firstname = %d, lastname = %d\n", len_firstname, len_lastname);
}
