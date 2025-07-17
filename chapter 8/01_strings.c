#include <stdio.h>

int main(){
    // char st[] = {'a', 'b', 'c', '\0' };
    char st[] = "abc"; // same  as doing char st[] = {'a', 'b', 'c', '\0' };
    for (int i = 0; i <= 3; i++)
    {
        printf("character is %c\n", st[i]);
        /* code */
    }   
    return 0;
}