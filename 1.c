#include <stdio.h>
int get_int(int a);
int main(void)
{
    int number[] = {1, 5, 10, 50, 100, 500, 1000};
    int a=get_int(a);
    for (int i = 0; i < 7; i++)
    {
        if (a == number[i])
        {
            printf("Found.\n");
            return 0;
        }
    }
    printf("Not Found.\n");
    return 1;
}

int get_int(int a)
{
    printf("Number: ");
    scanf("%i", &a);
    return a;
}