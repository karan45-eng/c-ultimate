#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[];
};
int main(){
    struct employee e1, e2;
   
    printf("the value of code\n");
    scanf("%d", &e1.code);

    printf("the value of salary\n");
    scanf("%f", &e1.salary);
    
    printf("the value of name\n");
    scanf("%s", &e1.name);
    printf("%d %f %s\n", e1.code, e1.salary, e1.name);

    printf("the value of code\n");
    scanf("%d", &e2.code);

    printf("the value of salary\n");
    scanf("%f", &e2.salary);
    
    printf("the value of name\n");
    scanf("%s", &e2.name);

    printf("%d %f %s", e2.code, e2.salary, e2.name);
    
    return 0;
}