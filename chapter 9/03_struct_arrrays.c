#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee facebook[100];

    facebook[0].code = 45;
    facebook[1].code = 56;

    struct employee karan = {45, 56, "karan"};
    printf("%d %f %s", karan.code, karan.salary, karan.name);
    return 0;
}