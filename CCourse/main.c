#include <stdio.h>
#include <math.h>

//int main(int argc, char **argv) {
//    double pettyCash;
//    double grandTotal;
//
//    grandTotal = 500.50;
//    pettyCash = 10.5;
//    printf("pettycash=%.2f\n", pettyCash);
//    pettyCash = 100.25;
//    printf("pettycash=%.2f\n", pettyCash);
//    printf("grandtotal=%.2f\n", grandTotal);
//    return 0;
//}


//Calculate program

//int main(int argc, char **argv) {
//    double subTotal;
//    double tax;
//    double grandTotal;
//    double taxRate;
//
//    taxRate = 0.175;
//    subTotal = 200;
//    tax = subTotal * taxRate;
//    grandTotal = subTotal + tax;
//
//    printf("The tax on %.2f is %.2f, so the grand total is %.2f\n", subTotal, tax, grandTotal);
//}

/*
 * In the above program the main point is when to use floating point numbers to get the right
 * calculation
 * %.2f is a specifier to display the data to two decimal points.
 */


//Constants
//the define is the instruction to pre processor - subsitute value to the declared numenclature
int main(int argc, char **argv) {
#define PI 3.141593
    printf("%f\n", PI);
    printf("%.10f\n", M_PI);
    return 0;
}