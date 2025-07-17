#include <stdio.h>

int main(){
    /*
    quick quize : write a program to print natural numbers from 10 to 20 when initial loop counter is initialige
    */
   int i = 0;
   while (i<=20){
       if(i>=10){
          printf("the value of i is %d\n", i);
       }
       i++;
   }
    return 0;
}