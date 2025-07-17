#include <stdio.h>

int main(){
    char i = 'A';
    char* j = &i; // j is a pointer pointing to i
    
    float k = 5.22;
    float* k1 = &k;
    printf("the adsdress of i is %p\n", &i);
    printf("the adsdress of i is %p\n", j);
    printf("the adsdress of i is %p\n", &k1);
    return 0;
}