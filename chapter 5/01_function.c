 #include <stdio.h>
  
 //function prototype
 int sum(int, int);

 //function definition
 int sum(int x, int y){
    printf("the sum is %d\n", x+y);
    return x+y;
 }

 int main(){
    int a=5;
    int b=6;
    
    sum(a,b);

    int a1=40;
    int b1=40;

    sum(a1,b1);

    sum(55,45);
    return 0;
 }