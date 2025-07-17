#include <stdio.h>

int sum(int*, int*);

int sum(int* a, int* b ){
    *a = 8;
    return (*a + *b);
}

int main(){
    int x = 3, y=7;
    printf("the sum of x and y is %d\n", sum(&x, &y));
    printf("the value of x is %d\n", x);
    return 0;
}