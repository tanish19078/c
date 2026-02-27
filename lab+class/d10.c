#include <stdio.h>
// store elements in an array and print them
/*

int main(){
    int n;
    int arr[n];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}
    */

    // display array elements in reverse order
    /*
    int main(){
    int n;
    int arr[n];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=n-1; i>=0; i--){
        printf("%d ", arr[i]);
    }
}    
    */

// find the sum of all elements in an array
/*
int main(){
    int n;
    int arr[n];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    printf("%d", sum);
}
*/

// find count of duplicate elements in an array
/*
int main(){
    int n;
    int arr[n];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
                break;
            }
        }
    }
    printf("%d", count);
}
*/

// print all unique elements in an array

/* 
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count == 1){
            printf("%d ", arr[i]);
        }
    }
}
    */
// 2d array

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
