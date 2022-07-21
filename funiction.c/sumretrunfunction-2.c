#include<stdio.h>
int plus (int a, int b)
{
    int sum;
    sum = a+b;
    return sum ;
}
int main ()
{
int a,b,d;
printf("enter two number:\t");
scanf("%d%d" ,&a,&b);
d =  plus (a,b);
 printf ("\n The sum is\t %d",d);
 return 0;
}
    


