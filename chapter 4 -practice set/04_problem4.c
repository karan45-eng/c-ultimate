#include <stdio.h>

int main(){
    int i = 1;
    int sum = 0;
    do
    {
        sum +=i;
        i++;
    } while (i<=10);
    printf("the sum of the first natural is %d",  sum);
    return 0;
}