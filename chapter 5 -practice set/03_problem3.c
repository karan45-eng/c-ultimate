#include <stdio.h>

float force(float);

float force(float mass){
    return mass*9.8;
}


int main(){
    float m = 6;
    printf("the value of force is %f\n", force(m));
    return 0;
}