#include <stdio.h>
//exp1: print hello world
/*

#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
*/

// exp2
/* 
#include <stdio.h>

int main() {
int num;
printf("Enter a number: ");
scanf("%d", &num);
printf("You entered: %d", num);
return 0;
}
*/
#include <stdio.h>
int main() {
    int num1, num2, sum;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    sum = num1 + num2;
    printf("Sum of %d and %d is: %d", num1, num2, sum);
    return 0;
}


// area and circumference of circle by input radius
/*
int main(){
    float radius, area, circumference;
    const float pi=3.14;
    scanf("%f", &radius);
    area = pi * radius * radius;
    circumference = 2 * pi * radius;
    printf("Area: %.2f\n", area);
    printf("Circumference: %.2f\n", circumference);
    return 0;
}
*/

// addition,subtraction,multiplication,division of 2 numbers
/*
int main(){
    int a,b;
    scanf("%d %d", &a,&b);                                               
    printf("Sum: %d\n", a + b);
    printf("Difference: %d\n", a - b);
    printf("Product: %d\n", a * b);
    printf("Quotient: %d\n", a / b);
    return 0;
}
*/

// (i) V = u + at. (ii) S = ut+1/2at 2 (iii) T=2*a+√b+9c (iv) H=√b 2 +p 2
/* 
int main(){
    float V,u,a,t,S,T,H,b,c,p;
    scanf("%f %f %f %f %f %f %f", &u,&a,&t,&b,&c,&p);
    V= u + a*t;
    S=u*t+0.5*a*t*t;
    T=2*a+sqrt(b+9*c);
    H=sqrt(b*b + p*p);
    printf("V: %.2f\n", V);
    printf("S: %.2f\n", S);
    printf("T: %.2f\n", T);
    printf("H: %.2f\n", H);
    return 0;
}
    */



