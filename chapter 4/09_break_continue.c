#include <stdio.h>

int main(){
   for (int i =1;i<16;i++)
   {
    if(i==7){
       // break; // exit the loop now!
       continue; // exit this iteration now
    }
     printf("%d\n", i);
   }
   
    return 0;
}