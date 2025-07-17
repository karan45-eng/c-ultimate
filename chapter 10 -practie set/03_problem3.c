#include <stdio.h>

int main(){
    char ch;
    FILE *ptr;
    FILE *ptr2;
    ptr = fopen("file.txt", "r");
    ptr2 = fopen("karan4.txt", "a");
    while (1)
    {
        ch = fgetc(ptr); // when all the content of a file has been read break
        
        if (ch == EOF)
        {
            break;
        }
        else{
            fprintf(ptr2, "%c", ch);
            fprintf(ptr2, "%c", ch);
            printf("%c", ch);
            
        }
        
    }
    
    return 0;
}