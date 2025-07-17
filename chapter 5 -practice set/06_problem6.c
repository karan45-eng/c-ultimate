#include <stdio.h>

int sum_natural(int n);

int sum_natural(int n){
    if(n==1){
        return 1;
    }
    // sum_natural(n) = 1 + 2 + 3 + 4 + 5+.....n-1 + n;
    // sum_natural(n) = sum(n-1) + n;
    return sum_natural(n-1) + n;
}
int main(){
    printf("the sum of first 8 natural number is %d", sum_natural(8));
    return 0;
}