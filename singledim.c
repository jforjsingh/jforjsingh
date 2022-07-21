#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>
int main ()
{
    int a[2][4],i,j;
	for(i=0;i<4;i++)
    {
        printf("%d\n",&a[i]);
        	for(j=0;j<i;j++)
        	printf("%d\n",&a[i][j]);
    }
    printf("\n");
    return 0;
}
