#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 6;
    int *ptr;
    ptr = (int*) malloc(n * sizeof(int));
    ptr[0] = 1;
    ptr[1] = 46;
    ptr[2] = 76;
    ptr[3] = 26;
    ptr[4] = 89;
    ptr[5] = 30;

    printf("%d", ptr[5]);
    return 0;
}