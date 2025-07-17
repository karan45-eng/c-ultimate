#include <stdio.h>
#include <stdlib.h>

int main(){
    float n = 5;
    float* ptr;
    ptr = (float*) malloc(n * sizeof(float));
    
    ptr[0] = 22.5496;
    ptr[1] = 358.25;
    ptr[2] = 36.1587;
    ptr[3] = 646.356;
    ptr[4] = 824.3585;
    printf("%f\n", ptr[0]);  
    printf("%f\n", ptr[1]);  
    printf("%f\n", ptr[2]);  
    printf("%f\n", ptr[3]);  
    printf("%f\n", ptr[4]);  
    return 0;
    
}