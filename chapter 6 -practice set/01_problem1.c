#include <stdio.h>

int main(){
    int i = 2;
    int* k = &i;
    printf("the address of i is %u\n", &i);
    printf("the value of i is %d\n", *k);
    return 0;
}