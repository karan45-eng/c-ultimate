#include <stdio.h>

int main(){
    // 8! = 1 X 2 X 3 X 4 X 5 X 6 X 7 X 8
    // 6! = 1 X 2 X 3 X 4 X 5 X 6
    // 5! = 1 X 2 X 3 X 4 X 5
    // n! = 1 x 2 x 3 x 4 x 5.......x n
    // 0! = 1
    int product = 1;
    int n = 0;
    for (int i = 1; i <= n; i++)
    {
        product *= i;
    }
    printf("the factorial is %d", product);
    return 0;
}