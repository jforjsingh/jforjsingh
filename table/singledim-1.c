#include<stdio.h>
int main()
{
int a[6],k;
printf("enter a number");
for ( k = 0; k < 6; k++)
{
    scanf("%d", &a[k]);
}
printf("enter a number");
for ( k = 0; k < 6; k++)
{
    printf("%d",a[k]);
}
return 0;
}