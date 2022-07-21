#include<stdio.h>
int main()
{
	int n,c,arm=0,r;
	printf ("enter a numbers:");
	scanf("%d",&n);
	c=n;
	while(n>0)
	{
		r=n%10;
		arm=arm+r*r*r;
		n=n/10;
	}
	if (arm==n)
	printf("the number is armstrong ");
	else 
	printf("not armstrong number ");
	return 0;
}
