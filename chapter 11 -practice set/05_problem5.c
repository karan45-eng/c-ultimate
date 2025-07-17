#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 10;
    
    int *ptr;
    ptr = (int*) malloc(n * sizeof(int));
   for (int i = 0; i < n; i++)
   {
    ptr[i] = 7 * (i+1);
   }
   printf("the table of 7 is 1 to 10 \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", ptr[i]);
        
    }
     
    n = 15;
    ptr = (int*) realloc(ptr, n * sizeof(int));
    for (int i = 0; i < n; i++)
   {
    ptr[i] = 7 * (i+1);
   }
   printf("the table of 7 is 1 to 15 \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", ptr[i]);
        
    }
    return 0;
}