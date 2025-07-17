#include <stdio.h>
#include <string.h>

int main(){
    //char st[] = "karan";

//printf("%d", strlen(st));

char s1[45] = "hay";
char s2[45] = " karan";

strcat(s1, s2);
printf("%s", s1 );

int a = strcmp("far", "joke");
    printf("%d", a);

    return 0;
}