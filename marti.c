#include <stdio.h>

int main() {
    int x, y;

    scanf("%d %d", &x, &y);
// print the sum of the two number//
    printf("Sum: %d\n", x + y);
    //print the difference of the two numbers //
    printf("Difference: %d\n", x - y);
    //print the product of the two numbers //
    printf("Product: %d\n", x * y);
    //print the quotient of the two numbers //
    printf("Quotient: %d\n", x / y);
    //print the remainder of the two numbers //
    printf("Remainder: %d\n", x % y);

    return 0;
}