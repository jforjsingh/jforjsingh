#include<stdio.h>
int main()
{
    int num,i;
    printf (" enter a number");
    scanf("%d",&num);
    for(int i=1;i<=10;i++){
        printf("%d * %d = %d",num,i,(num*i));
        printf("\n");
    }
    return 0;
    }
