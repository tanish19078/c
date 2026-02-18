// simple calculator using switch statement + loops
/* 
#include <stdio.h>
int main() {
    char operator;
    double num1, num2;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}

*/
// atm simulation
/*
#include <stdio.h>
int main() {
    int pin, attempts = 0;
    double balance = 1000.00, amount;

    while (attempts < 3) {
        printf("Enter your PIN: ");
        scanf("%d", &pin);

        if (pin == 1234) {
            printf("Welcome! Your current balance is $%.2lf\n", balance);
            printf("Enter amount to withdraw: ");
            scanf("%lf", &amount);

            if (amount > balance) {
                printf("Error: Insufficient funds.\n");
            } else {
                balance -= amount;
                printf("You have withdrawn $%.2lf. Your new balance is $%.2lf\n", amount, balance);
            }
            break;
        } else {
            attempts++;
            printf("Incorrect PIN. You have %d attempt(s) left.\n", 3 - attempts);
        }
    }

    if (attempts == 3) {
        printf("Your account has been locked due to too many incorrect attempts.\n");
    }

    return 0;
}
*/
// for loop with multiple variables
/*            
#include <stdio.h>
int main(){
    int x,y;   
    for (x=0,y=10;x+y<=10 && x<10 && y>=0;x++,y--){
        printf("The value of x is %d and y is %d\n",x,y);
    }
}
*/

// break for loop when 5th iteration is reached
/*
#include <stdio.h>
int main(){
    int i;   
    for (i=0;i<10;i++){
        if (i==5){
            break;
        }
        printf("The value of i is %d\n",i);
    }
}
*/

// continue statement to skip 5th iteration
/*
#include <stdio.h>
int main(){
    int i;   
    for (i=1;i<10;i++){
        if (i==5){
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}
*/

// goto statement 
/* 
#include <stdio.h>
int main() {
    const int maxinput=100;
    int i;
    double number,average,sum=0.0;
    for (i=0;i<maxinput;i++){
        printf("Enter a number (or -1 to stop): ");
        scanf("%lf",&number);
        if (number<0){
            goto calculate;
        }
        sum+=number;
    }
    calculate:
    if (i>0){
        average=sum/i;
        printf("The average of the entered numbers is: %.2lf\n",average);
    } else {
        printf("No numbers were entered.\n");
    }
    return 0;
}
*/

// BREAK statement AT I=13 , PRINT FROM 1 TO 20
/*
#include <stdio.h>
 int main() 
 { 
    int i; 
    for (i=1;i<=20;i++)
    { 
        if (i==13){ 
                         break; }
              printf("%d\n",i); 
            }
             return 0; 
            }
*/
// skip multiples of 3 from 1 to 20 using continue statement 
/*
#include <stdio.h>
 int main() 
 { 
    int i; 
    for (i=1;i<=20;i++)
    { 
        if (i%3==0){
             continue; }
              printf("%d\n",i); 
            }
             return 0; 
            }
*/
// ASKS USER TO ENTER A POSTIVE NUMBER AND IF USER ENTERS NEGATIVE USE GOTO TO ASK AGAIN
/*
#include <stdio.h>
 int main() 
 { 
    int number; 
    start:
    printf("Enter a positive number: ");
    scanf("%d",&number);
    if (number<0){
        printf("Invalid input. Please enter a positive number.\n");
        goto start;
    }
    printf("You entered: %d\n",number);
    return 0; 
}
*/