//Array example
#include <stdio.h>

// int intarray[5]; 

// int main(int argc, char **argv) {
//     int i;

//     intarray[0] = 1;
//     intarray[1] = 11;
//     intarray[2] = 21;
//     intarray[3] = 31;
//     intarray[4] = 41;

//     for (i = 0; i < 5; i++) {
//         printf("%d\n", intarray[i]);
//     }

//     printf("The integer at intarray[3] is: %d\n", intarray[3]);
// }

//Initializing Arrays 
//Don't need to specificy the number of items in array, just need to initialize 

// int intarray[] = {1,2,3,4,5};
// double doublearray2[] = {2.1,2.3,2.4,2.5};
// char chararray[] = {'h', 'e', 'l', 'l', 'o', '\0'};
// char chararray2[] = "World"; //the null terminator is appended automatically when assigning an array like this 

// int main(int argc, char **argv) {
//     int i;

//     for (i = 0; i < 5; i++) {
//         intarray[i] = ((i + 1) * 100); 
//     }

//     printf("--- for loop --- \n");
//     for (i = 0; i < 5; i++) {
//         printf("%d\n", intarray[i]); 
//     }
// }

//While Loops
// int main(int argc, char **argv) {
//     char c;
//     c = ' ';
//     printf("\ngetchar() with while loop...\n"); 

//     while(c != 'y') {
//         printf("\n Enter y or n: "); 
//         c = getchar();
//         getchar();
//     }
//     printf("\nThat's all folks!\n");

//     //Do While Loops
//     c = 'y'; 
//     printf("\ngetchar() with do..while loop...\n"); 
//     do {
//         printf("\nEnter y or n: ");
//         c = getchar();
//         getchar();
//     } while (c != 'y'); 
//     printf("\nThat's all folks!\n");
//     return 0;
// }

int main(int argc, char **argv) {
    int i;
    i = 0;
    while(i < 10) {
        if (i == 5) {
            break;
        }
        printf("i = %d\n", i);
        i++; 
    }
    return 0;
}