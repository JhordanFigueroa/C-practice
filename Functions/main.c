#include <stdio.h>

void sayHello() {
    printf("Hello\n");
}

void greet(char aName[]) {
    printf("Hello %s\n", aName); 
}

int add(int num1, int num2) {
    num1 = num1 + num2; 
    return num1;
}

double divide(int num1, int num2) {
    return num1 / num2;
}

int main(int argc, char **argv) {
    double result;
    int n1;
    int n2;
    int total;

    n1 = 10;
    n2 = 3; 

    sayHello();
    greet("Jhordan"); 

    total = add(n1, n2); //C passes by value, they are sent as copies, not referenced to the original variables. 
    //To pass by reference you need to use pointers
    printf("%d + %d = %d\n", n1, n2, total);
    result = divide(100, 3);

    printf("Result = %f\n", result);
    return 0;
}

