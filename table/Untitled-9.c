#include<stdio.h>
int main ()
{
    int a;
     printf("enter your age\n ");
     scanf("%d",&a);
     if(a>=18)
     {
        printf("%d,you are eligible to vote",a);
     }
     else{
        printf("%d,you are not eligible to vote",a);
     }
return 0;
}