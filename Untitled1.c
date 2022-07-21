#include<stdio.h>
int main()
{
    int units; 
    printf("enter units");
    scanf("%d",&units);
    int charge=0;
    if(units<=100){
        charge =50+5*units;
    }
    else if(units<=300 && units >100)
    {
        charge = 50+(units - 100)*6+100*5;
    }
    else{
        charge = 50 +( units -300)*7+100*5+200*6;
    }
    printf("the total units = %d\n",units);
    printf("the total charge = %d",charge);

return 0;
}


