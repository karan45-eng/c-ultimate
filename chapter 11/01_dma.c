#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int* ptr;
    scanf("%d", &n);
    ptr = (int*) malloc(n * sizeof(int));
    // int arr[n]; // not allowed in c
    ptr[0] = 2;
    ptr[1] = 3;
    printf("%d", ptr[0]);  
    return 0;
    
}