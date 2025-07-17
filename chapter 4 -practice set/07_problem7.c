#include <stdio.h>

int main(){
    int n = 4;
    int product = 1;
    int i = 1;
    while (i<=n)
    {
        product *= i;
        i++;
    }
    printf("the factorial is %d", product);
    return 0;
}