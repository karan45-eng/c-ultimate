#include <stdio.h>

int main(){
    // length = 6;
    // breadth = 5;
    int length, breadth;
    printf("enter length/n");
    scanf("%d", &length);

    printf("enter breadth/n");
    scanf("%d", &breadth);
    
    printf("the area of the rectangle is %d", length*breadth);
    return 0;
}