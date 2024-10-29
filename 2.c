#include <stdio.h>
int main(void)
{
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%dx%d=%d ", j, i, i * j);
            if (i * j < 10 && j != 1)
                printf(" ");
        }
        printf("\n");
    }
}