#include <stdio.h>

int main(){
    int prime = 0;
    int n = 11;
    for (int i = 2; i < n; i++)
    {
        if(n%i == 0){
            prime = 1;
            break;
        }
    }
    if(prime){
        printf("%d is not prime\n", n);
    }
    else{
        printf("%d is prime\n", n);
    }
    return 0;
}