#include <stdio.h>

int main()
{
    int arr[3][10];
    int mul[] = {4, 5, 8};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = mul[i] * (j + 1);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("The value of arr[i][j] is %d\n", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}