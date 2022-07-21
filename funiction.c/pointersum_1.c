#include<stdio.h>
int main()
{
    int a = 5;
    int  b = 10;
    int s =  s(&a,&b);
    printf ("sum = %d",s);
    int sum (int *x, int *y)
    {
        *x = 10;
        *y = 20;
        return (*x + *y);
    }
}