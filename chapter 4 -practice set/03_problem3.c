#include <stdio.h>

int main(){
    int  i = 1;
    int sum = 0;
    while (i<=10)
    {
        sum +=i;
        i++;
    }
    printf("the sum of first 10 natural number is %d", sum);

    return 0;
}