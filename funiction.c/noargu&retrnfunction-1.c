#include<stdio.h>
void plus ()
{
    int a, b;
    printf ("enter the two number:");
    scanf("%d%d",&a,&b);
    int sum = a+b;
    printf ("\n The sum is %d",sum);
    return plus;
}

int main ()
{
  plus ();
  return 0;
}
 