#include <stdio.h>
/*
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Sum: %d\n", a + b);
    printf("Difference: %d\n", a - b);
    printf("Product: %d\n", a * b);
    printf("Quotient: %d\n", a / b);
    printf("Remainder: %d\n", a % b);
    printf("Bitwise AND: %d\n", a & b);
    printf("Bitwise OR: %d\n", a | b);
    printf("Bitwise XOR: %d\n", a ^ b);
    printf("left shift by 2: %d\n", a << 2);
    printf("right shift by 2: %d\n", a >> 2); 

    return 0;
}
*/


// ternary operator example - (cond?exp1:exp2)

int main(){
    int a,b, max;
    scanf("%d %d", &a, &b);
    max = (a > b) ? a : b;
    printf("Maximum: %d\n", max);
    return 0;
}


