#include <stdio.h>
/*

int max(int a, int b){
    if (a > b){
         return(a);
    }
    else {
        return(b);
    }
}

int main(){
    int a,b;
    scanf("%d %d", &a,&b);
    int result = max(a,b);
    printf("Max: %d\n", result);
    return 0;
}

*/

/*

int check(int a,int b){
    if (a>18 && b>50){
        return 1;
        
    }
    return 0;
}

int main(){
    int a,b;
    scanf("%d %d", &a,&b);
    int result = check(a,b);
    if (result == 1){
        printf("Accepted\n");
    }
    else {
        printf("Rejected\n");
    }
    return 0;
}

*/

/*
int main(){
    int n,i,max,num;
    scanf("%d", &n);
    max = -1;
    for (i=0;i<n;i++){0
        scanf("%d", &num);
        if (num > max){
            max = num;
        }
    }
printf("Max: %d\n", max);
    return 0;
}

*/

/*
int main(){
    int scope;
    scanf("%d", &scope);
    if (scope==8){
        printf("AWM , Kar\n");
    }
    else if (scope==6){
        printf("M24 , SLR\n");
    }
    else {
        printf("No sniper available\n");
    }
}
*/

/*
int main(){
    int a,b,c,max;
    scanf("%d %d %d", &a,&b,&c);
    if (a>=b && a>=c){
        max = a;
    }
    else if (b>=a && b>=c){
        max = b;
    }
    else {
        max = c;
    }
    printf("Max: %d\n", max);
    return 0;
}
*/
/*
int bungee(int a, int b) {
    if (a>40 && a<110 && b>12){
        return 1;
    }
    return 0;
}
int main(){
    int a,b;
    scanf("%d %d", &a,&b);
    int result = bungee(a,b);
    if (result == 1){
        printf("Eligible\n");
    }
    else {
        printf("Not Eligible\n");
    }
    return 0;
}
*/

/*
int main(){

    int a;
    scanf("%d",&a);
    switch (a){
    case 1:
    printf("Forest\n");
        break;
    case 2:
    printf("Desert");
        break;
    case 3:
    printf("RainForest");
        break;

    case 4:
    printf("Snow");
        break;
    }

    return 0;
}

*/
/*
int main() {
    int school, dept;

    printf("Select School:\n");
    printf("1. School of Engineering\n");
    printf("2. School of Business\n");
    printf("3. School of Pharmacy\n");
    scanf("%d", &school);

    switch (school) {
        case 1:
            printf("School of Engineering\n");
            printf("Select Department:\n");
            printf("1. Mechanical Engineering\n");
            printf("2. Civil Engineering\n");
            printf("3. Computer Science Engineering\n");
            scanf("%d", &dept);

            switch (dept) {
                case 1:
                    printf("Department of Mechanical Engineering\n");
                    break;
                case 2:
                    printf("Department of Civil Engineering\n");
                    break;
                case 3:
                    printf("Department of Computer Science Engineering\n");
                    break;
                default:
                    printf("Invalid Department\n");
            }
            break;

        case 2:
            printf("School of Business\n");
            printf("Select Department:\n");
            printf("1. Commerce\n");
            printf("2. Purchasing\n");
            scanf("%d", &dept);

            switch (dept) {
                case 1:
                    printf("Department of Commerce\n");
                    break;
                case 2:
                    printf("Department of Purchasing\n");
                    break;
                default:
                    printf("Invalid Department\n");
            }
            break;

        case 3:
            printf("School of Pharmacy\n");
            break;

        default:
            printf("Invalid School Selection\n");
    }

    return 0;
}

*/

