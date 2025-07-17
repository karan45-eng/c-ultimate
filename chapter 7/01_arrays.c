#include <stdio.h>

int main(){
    int marks[90]; // reserve space tp store 90 integers

    marks[0] = 25;
    marks[1] = 30;
    // we can go all way till marks[89]
    printf("marks 0 and marks 1 is %d %d", marks[0], marks[1]);
    return 0;
}