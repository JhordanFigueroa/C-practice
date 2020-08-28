#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// char str1[] = "Aloha";
// char str2[] = "Goodbye\0 world"; //null character is treated as the end of the string 

// void showString(char *str) {
//     int i;
//     int len = strlen(str); 

//     printf("Length of %s is %d.\n", str, len);

//     for (i = 0; i <= len; i++) {
//         if (str[i] == '\0') {
//             printf("char[%d] = NULL\n", i);
//         } else {
//             printf("char[%d] = %c\n", i, str[i]);
//         }
//     }
// }

// int main(int argc, char **argv) {
//     showString(str1);
//     showString(str2);
//     printf("%s\n", str1);
//     printf("%s\n", str2);

//     return 0;
// }

//Pointers, Addresses, and Values
int main(int argc, char **argv) {
    char str1[] = "Aloha"; //represents the actual memory location where char array of letters is stored
    char *str2 = "Mahalo"; //represents a memory location (number) - where the actuall char array of letters is stored

    printf("%x %x %s\n", &str1, str1, str1); //&- gives the address operator, str1 - gives the actual address start, which is the same in this case. 
    printf("%x %x %s\n", &str2, str2, str2); //Since str2 is a pointer, & - gives address of the pointer, but the actual start of Goodbye literal is a different address. Pointer 

    //The value of an array name is the address of the start of that array

    str2 = &str1; //this changes the pointer of str2 to the start of str1
    printf("After Change: %x %x %s\n", &str2, str2, str2);

    str2 = str1; //Don't need the address operator bc str1 is an array name actually is the address of that array
    printf("After Change: %x %x %s\n", &str2, str2, str2);

    //Array name is fixed - when program is compiled the array name becomes the address of the array itself - can't be changed when the program is running - can't make a new assignment to the array itself 
    //You can change the assignemt with a pointer tho, not a string literal. 

    //str1 = "Mahahlo"; //Illegal assignment 
    str2 = "Chao"; //can do it bc its a pointer 
    
    return 0;
}

