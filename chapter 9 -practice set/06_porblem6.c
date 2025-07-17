#include <stdio.h>
 
typedef struct c{
    int real;
    int imaginary;
} complex;

void display(complex c){
    printf("the value of vector is %d + %di", c.real, c.imaginary);
}
int main()
{
    complex carr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter real part \n");
        scanf("%d", &carr[i].real);
        printf("Enter imaginary part \n");
        scanf("%d\n", &carr[i].imaginary);
        display (carr[i]);
    }
    
    return 0;
}