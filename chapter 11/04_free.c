#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int* ptr;
    scanf("%d", &n);
    ptr = (int*) malloc(n * sizeof(int));
   
    ptr[0] = 2;
    free(ptr);
    printf("%d", ptr[0]);  
    free(ptr);
    return 0;
    
}