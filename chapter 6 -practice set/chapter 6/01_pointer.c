#include <stdio.h>

int main(){
    int i = 72;
    int* j = &i; // j is a pointer pointing to i
    int k = 55;
    printf("the adsdress of i is %p\n", &i);
    printf("the adsdress of i is %p\n", j);
    printf("the adsdress of i is %p\n", &k);

    printf("the value at address j is %d\n", *j);
    return 0;
}