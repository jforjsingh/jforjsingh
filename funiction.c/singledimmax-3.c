#include<stdio.h>
int main()
{
    int a[5];
    int m = 0, i , r;
    printf ("Enter a number");
    for ( i = 0; i < 5; i++)
    {
    scanf("%d", &a[i]);
    }
    while (a[i]>0)
    {
    r = a[i]%10;
    if(r>a[i]){
    a[i] = r;
    }
    a[i] = a[i]/10;
     }
    printf("The largest number: %d", a[i]);
    return 0 ;
} 