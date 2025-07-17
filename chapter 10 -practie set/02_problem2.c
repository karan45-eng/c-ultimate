#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("table.txt", "w");
    int num = 4;

    for (int i = 0; i < 10; i++)
    {
        fprintf(fptr, "%d", num*(i+1));
        fprintf(fptr," %c", '\n');
    }
    
    return 0;
}