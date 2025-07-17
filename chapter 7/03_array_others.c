#include <stdio.h>

int main(){
    int cgpa[3] = {9, 7, 8};

    for (int i = 0; i < 3; i++)
    {
        printf("the value of arrays at index %d is %d\n", i , cgpa[i]);
    }
    return 0;
}