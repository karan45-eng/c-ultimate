#include <stdio.h>

int sum(int, int);

int sum(int a, int b ){
    return a + b;
}

int main(){
    printf("the sum of 2 and 3 is %d", sum(2, 3));
    return 0;
}