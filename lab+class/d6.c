// factorial of number 
/*
#include <stdio.h>
int main()
{
    int n, i;
    unsigned long long factorial = 1;

    scanf("%d", &n);

    for (i = 1; i <= n; ++i)
        {
            factorial *= i;              // factorial = factorial * i;
        }
        printf("Factorial of %d = %llu", n, factorial);
  

    return 0;
  }

  
*/
// factorial of number using while loop
/*
#include <stdio.h>
int main() {
    int n, i = 1;
    unsigned long long factorial = 1;

    scanf("%d", &n);

    while (i <= n) {
        factorial *= i; // factorial = factorial * i;
        i++;
    }

    printf("Factorial of %d = %llu", n, factorial);
    return 0;
}
*/

// factorial of number using do while loop
/*
#include <stdio.h>
int main() {
    int n, i = 1;
    unsigned long long factorial = 1;

    scanf("%d", &n);

    if (n < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
        return 1;
    }

    do {
        factorial *= i; // factorial = factorial * i;
        i++;
    } while (i <= n);

    printf("Factorial of %d = %llu", n, factorial);
    return 0;
}
*/
// count digits in a number 
/*
#include <stdio.h>
int main() {
    int n,cnt=0;
    scanf("%d", &n);
    while (n != 0) {
        n /= 10;
        ++cnt;
    }
    printf("Number of digits: %d", cnt);
    return 0;
}
*/

// display menu using do while and perform arithmetic operations
/*
#include <stdio.h>
int main() {
    int choice;
    double num1, num2;

    do {
        printf("Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
        }

        switch (choice) {
            case 1:
                printf("Result: %.2lf\n", num1 + num2);
                break;
            case 2:
                printf("Result: %.2lf\n", num1 - num2);
                break;
            case 3:
                printf("Result: %.2lf\n", num1 * num2);
                break;
            case 4:
                if (num2 != 0) {
                    printf("Result: %.2lf\n", num1 / num2);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            case 5:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
*/
//PRIME NUMBER CHECKER

// prime number or not using do while loop

/*
#include <stdio.h>
int main() {
    int n, i = 2, isPrime = 1;
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = 0; // 0 and 1 are not prime numbers
    } else {
        do {
            if (n % i == 0) {
                isPrime = 0; // n is divisible by i, hence not prime
                break;
            }
            i++;
        } while (i <= n / 2);
    }

    if (isPrime) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}
*/

// prime number checker using for loop
/*
#include <stdio.h>
int main() {
    int n, i, isPrime = 1;
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = 0; // 0 and 1 are not prime numbers
    } else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0; // n is divisible by i, hence not prime
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}
*/

// prime number checker using while loop
/*
#include <stdio.h>
int main() {
    int n, i = 2, isPrime = 1;
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = 0; // 0 and 1 are not prime numbers
    } else {
        while (i <= n / 2) {
            if (n % i == 0) {
                isPrime = 0; // n is divisible by i, hence not prime
                break;
            }
            i++;
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}

*/
/// REVERSE A NUMBER

// reverse a number using while loop
/* 
#include <stdio.h>
int main() {
    int n,rev=0,rem;
    scanf("%d", &n);
    while (n != 0) {
        rem = n % 10; 
        rev = rev * 10 + rem;
        n /= 10; 
    }
    printf("%d", rev);
    return 0;
}
*/

// reverse a number using for loop
/* 
#include <stdio.h>
int main(){
    int n, rev = 0, rem;
    scanf("%d", &n);
    for (; n != 0; n /= 10) {
        rem = n % 10; 
        rev = rev * 10 + rem;
    }
    printf("%d", rev);
    return 0;

}
*/


// reverse a number using do while loop
/*
#include <stdio.h>
int main() {
    int n, rev = 0, rem;
    scanf("%d", &n);
    do {
        rem = n % 10; 
        rev = rev * 10 + rem;
        n /= 10; 
    } while (n != 0);
    printf("%d", rev);
    return 0;
}
*/
