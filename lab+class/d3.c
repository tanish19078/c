#include <stdio.h>
// print the first 10 natural numbers
/*
int main() {
    int i = 1;
    while (i<=10){
        printf("%d ", i);
        i++;
    }   
}
*/

// print multiplication table of a given number

/*
int main(){
    int n;
    scanf("%d", &n);
    int i = 1;
    while (i<=10){
        printf("%d x %d = %d\n", n, i, n*i);
        i++;

    }
    return 0;
}
*/

// print even numbers between 1 to n

/*
int main(){
    int n;
    scanf("%d", &n);
    int i = 2;
    while (i<=n){
        printf("%d ", i);
        i+=2;
    }
    return 0;
}
*/

// sum of digits of a given number

/*
int main(){
    int n,sum=0;
    scanf("%d", &n);
    while (n>0){
        int digit = n%10;
        sum += digit;
        n = n/10;
    }
    printf("%d", sum);
    return 0;
}
*/

// reverse a given number

/*
int main(){
    int n,rev=0;
    scanf("%d", &n);
    while (n>0){
        int digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    printf("%d", rev);
    return 0;
}
*/

//check if number is armstrong number
#include <math.h>

int main(){
    int originalN,remainder,num,result=0,n=0;
    scanf("%d", &num);
    originalN=num;
    while (originalN!=0){
        originalN=originalN/10;
        n++;
    }
    originalN=num;

    while (originalN!=0){
        remainder=originalN%10;
        result+=pow(remainder,n);
        originalN=originalN/10;
    }
    if (result==num){
        printf("Armstrong Number");
    }
    else{
        printf("Not an Armstrong Number");
    }
    return 0;
}
