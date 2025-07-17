#include <stdio.h>
 
typedef struct c{
    int real;
    int imaginary;
} complex;

int main()
{
    complex c = {2, 6};
    printf("the value of vector is %d + %di", c.real, c.imaginary);
    return 0;
}