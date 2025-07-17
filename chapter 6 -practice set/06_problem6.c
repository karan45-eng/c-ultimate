#include <stdio.h>

int main(){
    int i = 2;
    int* k = &i;
    int** s = &k;
    printf("the address of i is %u\n", &i);
    printf("the value of i is %d\n", *k);
    printf("the value of i is %d\n", **s);
    return 0;
}