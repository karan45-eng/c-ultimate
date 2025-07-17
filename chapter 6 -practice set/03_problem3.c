#include <stdio.h>

void change_to_ten_times(int*);

void change_to_ten_times(int* a){
    *a = *a * 10;
}
int main(){
    int x = 30;
    printf("the value of x is %d\n", x);
    change_to_ten_times(&x);
    printf("the value of x is %d\n", x);
    return 0;
}