#include <stdio.h>

//pattern print triangle
/*
int main() {
    int i, j, rows;
    scanf("%d", &rows);

    for(i = 1; i <= rows; ++i) {
        for(j = 1; j <= i; ++j) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
*/

// pattern print square
/*
int main() {
    int i, j, rows;
    scanf("%d", &rows);

    for(i = 1; i <= rows; ++i) {
        for(j = 1; j <= rows; ++j) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
*/

// pattern print rev right triangle

/*
int main() {
    int i, j, rows;
    scanf("%d", &rows);

    for(i = 1; i <= rows; ++i) {
        for(j = 1; j <= rows - i + 1; ++j) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
*/

// program to print prime numbers in a given range

int main() {
    int lower, upper, i, j, flag;

    scanf("%d %d", &lower, &upper);

    for(i = lower; i <= upper; i++) {
        if(i <= 1) continue; 
        flag = 1; 
        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                flag = 0;
                break;
            }
        }
        if(flag == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
