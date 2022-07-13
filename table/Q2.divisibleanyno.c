#include <stdio.h>
int main()
{
    int lower, upper, i;
    printf("Enter the lower bound value:");
    scanf("%d", &lower);
    printf("Enter the upper bound value:");
    scanf("%d", &upper);
    for (i = lower; i <= upper; i++)
    {
        if (i % 2 == 0 && i % 3 == 0 && i % 5 == 0
        )
            printf("%d\n", i);
    }
    return 0;
}