//
// Created by Jhordan Figueroa on 12/23/19.
//

#include <stdio.h>


#include <stdio.h>

void swap1(int a, int b) {
    int temp = a;
    a = b;
    b = a;
}

void swap2(int a, int b) {
    int* temp1 = &a;
    int* temp2 = &b;
    *temp1 = b;
    *temp2 = a;
}

void swap3(int * a, int * b) {
    int temp1 = *b;
    int temp2 = *a;
    *a = temp1;
    *b = temp2;
}

struct Point {
    int x, y;
} p1;

int square (int* var, int length) {
    for (int i = 0; i < length; i++, var++) {
        *var = (*var) * (*var);
        printf("var %p\n", &var);
    }
}

//Defining a string by characters bracket notation, hard way to do it and requires a null terminating character
void stringExample() {
    char susan[6];
    susan[0] = 's';
    susan[1] = 'u';
    susan[2] = 's';
    susan[3] = 'a';
    susan[4] = 'n';
    susan[5] = '\0';
    printf("Susan = %s\n", susan);
}

void buggyStringOne() {
    char susan[5] = "Susan";
    for (int i = 0; i < 5; i++) {
        printf("%c\n", susan[i]);
    }
}

void exBracketVsPointerArth() {
    int sum = 0;
    int arr[3] = {1, 2, 3};
//    for (int i = 0; i < 3; i++) {
//        sum += arr[i];
//    }
//    printf("Printing sum by bracket: %d\n", sum);

    int *p = arr;
    for (int i = 0; i < 3; i++) {
        printf("pointer address: %p\n", p);
        printf("pointer value: %d\n", *p);
        printf("sum at i: %d\n%d\n ", sum, i);
        sum += *p++;
    }
    printf("Printing sum by pointer arth: %d\n", sum);
}

void guess (int *ptr) {
    *ptr = 30;
}

void printArray(int* arr, int size) {
    int i = 0;
    int* copy = arr;
    for (i = 0; i < size; i++) {
        printf("%d\n", copy[i]);
    }
}

int strLen (char* string) {
    int length = 0;
    while (string[length] != '\0') {
        length++;
    }

    return length;
}

#define ARRAY_SIZE 4
int main()
{
//    int a[3] = {1, 2, 3};
//    int result = square(a, 3);
//    printf("result = %d\n", result);

//    int b = 5;
//    int * c = &b;
//    printf("b = %d\n", b);
//    printf("Printing the address of b use &: %p\n", &b);
//    printf("c equals = printing value contents at c which is pointing to address of b = %p\n", c);
//    printf("Printing the address of c use &: %p\n", &c);
//    int** a = &c;
//    printf("a equals = pointing to the address of c which is a pointer: %p\n", a);
//    printf("Derefercing a = which is the address c is pointing to: %p\n", *a); //dereferences a which points c and gets the value of c which is a pointer
//    printf("Pointer to pointer: %d\n", **a); //double dereference gets the value of c which is 5


    //Swap
    int a = 5;
    int b = 0;

    swap1(a,b);
    printf("swap1: a = %d\n", a);
    printf("swap1: b = %d\n", b);

    printf("*************\n");

    swap2(a,b);
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    printf("*************\n");

    swap3(&a,&b);
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    //STRINGS: use null terminating character at the end '\0'
//    stringExample();
//    buggyStringOne();
//    exBracketVsPointerArth();

    //Passing by address- pointer
//    int y = 20;
//    guess(&y);
//    printf("Passing y by address: %d\n", y);

    //Pointer Practice
//    int *ptr = NULL;
//    int x = 9;
//    int arr[4] = {1,4,8,10};
//    int *arr_ptr = NULL;

//    ptr = &x; //gets the address
//    *ptr = 0;
//
//    printf("x = %d\n", x);
//    printf("address of x = %p\n", &x);
//    printf("ptr = %p\n", ptr);
//    printf("&ptr = %p\n", &ptr);
//    printf("*ptr = %d\n", *ptr);
//    printf("\n");
//
//    ptr++;
//    printf("*ptr = %p\n", ptr);
//    *ptr += 5;
//    printf("x = %d\n", x);
//    printf("*ptr = %d\n", *ptr);
//    printf("\n");
//
//    //Pointer arithmatic
//    (*ptr)++;
//    printf("x = %d\n", x);
//    printf("*ptr = %d\n", *ptr);
//    printf("\n");

//    arr_ptr = arr; //points to the first element in the arr = 1
//    printf("*arr_ptr = %d\n", *arr_ptr);
//
//    (*arr_ptr)++; //currently pointing to first element in arr and adds 1 to it = 2;
//    printf("*arr_ptr = %d\n", *arr_ptr);
//
//    (arr_ptr)++; //currently pointing to address of first element in arr but adds 1, points to the next value in arr = 4
//    printf("*arr_ptr = %d\n", *arr_ptr);
//
//    arr_ptr++;
//    printf("*arr_ptr = %d\n", *arr_ptr);

    //Print Array
//    char arr[] = "hell";
//    printArray(arr, 4);

    //String Practice
    //String literal
    //const - sets to the global variable
//    char * str = "Hello world";
//    printf("%s\n", str);
//
//    //cannot alter data
////    str[4] = 'p'; //because its a string literal
//
//    str = "I want to change";
//    printf("%s\n", str);
//
//    //array of characters
//    char strArr[] = "hello";
//    printf("%s\n", strArr);
//
//    //can alter array
//    strArr[4] = 'p';
//    printf("%s\n", strArr);

//    Cannot increment pointer
//    strArr++;

    //Strlength
//    int len = 0;
//    char str[] = "Hello there";
//    len = strLen(str);
//    printf("length = %d\n", len);

    //Writing an output file
//    char array[ARRAY_SIZE] = {'T', 'o', 'm', '\0'};
//
//    char* array2 = "Tom";
//
//    FILE *theFile = fopen ("output_file.txt", "w");
//
//    if (theFile == NULL) {
//        return 1;
//    }
//
//    fputs (array, theFile);
//
//    fputs (array2, theFile);
//
//    fputs ("Tom", theFile);
//
//    fclose (theFile);

    return 0;
}


//Mallac
//    struct Point point;
//    p1 * point = (p1 *) malloc(sizeof(p1));
//    point.x = 5;
//    point.y = 3;
//    printf("x = %d\n", point.x);
//    printf("y = %d\n", point.y);

//    swap1(a,b);
//    printf("swap1: a = %d\n", a);
//    printf("swap1: b = %d\n", b);
//
//    printf("*************\n");
//
//    swap2(a,b);
//    printf("a = %d\n", a);
//    printf("b = %d\n", b);
//
//    printf("*************\n");
//
//    swap3(&a,&b);
//    printf("a = %d\n", a);
//    printf("b = %d\n", b);
