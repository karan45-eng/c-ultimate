#include <stdio.h>

struct bankacc{
    int accNo;
    char name[34];
    char ifsc[12];
    float balance; 
};

int main(){ 
    int accNo[0];
    printf("Enter the account number\n");
    scanf("%d \n", &accNo);
    char name;
    printf("Enter the name of account holder\n");
    scanf("%c\n", &name);
    float balance;
    printf("Enter the balance\n");
    scanf("%f\n", &balance);
    return 0;
}