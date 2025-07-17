#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("karan.txt", "a");
    int num = 12;
    fprintf(fptr, "%d", num);
    fclose(fptr);    
    return 0;
}