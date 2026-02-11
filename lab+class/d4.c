#include <stdio.h>
/*

int main() {
    int age, i;
    int baby = 0, school = 0, adult = 0;

    for (i = 1; i <= 15; i++) {
        printf("Enter age of person %d: ", i);
        scanf("%d", &age);

        if (age <= 5) {
            baby++;
        } 
        else if (age <= 17) {
            school++;
        } 
        else {
            adult++;
        }
    }

    printf("\nTotal Baby Age Persons   : %d", baby);
    printf("\nTotal School Age Persons : %d", school);
    printf("\nTotal Adult Age Persons  : %d", adult);

    return 0;
}
*/

// calculate sum of first n natural numbers using for loop
/*
int main(){
    int n, i, sum = 0;
    scanf("%d", &n);

    for(i = 1; i <= n; ++i){
        sum += i; 
    }
    printf("Sum of first %d natural numbers is: %d\n", n, sum);
    return 0;
}
*/

// print odd numbers from 1 to n using for loop

/*
int main(){
    int n, i;
    scanf("%d", &n);

    for(i = 1; i <= n; i += 2){
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
*/

// print fibonacci series up to n terms using for loop
/*
int main(){
    int n, i;
    int t1 = 0, t2 = 1, nextTerm;

    scanf("%d", &n);

    for(i = 1; i <= n; ++i){
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
    return 0;
}
*/

// 