#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,r;
	printf ("enter a numbers :");
	scanf("%d",&n);
while (n>0)
{
	r=n%10;
	n=n/10;
printf("%d",r);
}
	return 0;
}
