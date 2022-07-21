#include<stdio.h>
int sum ()
{
    int a, b;
    printf ("enter the two number:");
    scanf("%d%d",&a,&b);
    int s = a+b;
    return s;
    
}

int main ()
{
  printf("%d",sum());
  return 0;
}
