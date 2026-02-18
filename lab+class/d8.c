#include <stdio.h>

/* Function to check if a number is perfect */
int is_perfect(int num) {
    int sum = 0;

    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    return sum == num;
}

/* Function to find factors of a number */
void factors(int num) {
    printf("Factors of %d are: ", num);

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
}

/* Function to convert decimal to binary */
void decimal_to_binary(int num) {
    if (num == 0) {
        printf("Binary representation: 0\n");
        return;
    }

    int binary[32];
    int index = 0;

    while (num > 0) {
        binary[index++] = num % 2;
        num /= 2;
    }

    printf("Binary representation: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

/* Function to find LCM of two numbers */
int lcm(int a, int b) {
    int max = (a > b) ? a : b;

    while (1) {
        if (max % a == 0 && max % b == 0) {
            return max;
        }
        max++;
    }
}

/* Function to check if a number is strong */
int is_strong(int num) {
    int sum = 0, temp = num;

    while (temp > 0) {
        int digit = temp % 10;
        int factorial = 1;

        for (int i = 1; i <= digit; i++) {
            factorial *= i;
        }

        sum += factorial;
        temp /= 10;
    }

    return sum == num;
}

/* Main function */
int main() {
    int num1, num2;

    // Perfect number
    printf("Enter a number to check if it's perfect: ");
    scanf("%d", &num1);

    if (is_perfect(num1))
        printf("%d is a perfect number.\n", num1);
    else
        printf("%d is not a perfect number.\n", num1);

    // Factors
    printf("\nEnter a number to find its factors: ");
    scanf("%d", &num1);
    factors(num1);

    // Decimal to Binary
    printf("\nEnter a decimal number to convert to binary: ");
    scanf("%d", &num1);
    decimal_to_binary(num1);

    // LCM
    printf("\nEnter two numbers to find their LCM: ");
    scanf("%d %d", &num1, &num2);
    printf("LCM of %d and %d is %d\n", num1, num2, lcm(num1, num2));

    // Strong number
    printf("\nEnter a number to check if it's a strong number: ");
    scanf("%d", &num1);

    if (is_strong(num1))
        printf("%d is a strong number.\n", num1);
    else
        printf("%d is not a strong number.\n", num1);

    return 0;
}
