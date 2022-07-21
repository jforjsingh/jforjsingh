#include <stdio.h>
#include <math.h>
int main() {
	int num, count,prime,i;
	printf("prime number from 1 to 300");
	for (num=1; num <= 300; num++) 
	{
	 if (num == 1)
	 {
	 	printf ("number 1 is netiher prime nor composite \n");
	 	continue;
	 }
	count = num/2;
	prime = 1;
	for (i=2;i<=num;i++)
	{
		if ( num % i == 0)
		{
			prime =0;
			break ;
	}
		}
     
	if (prime )
	{
		printf("%d\t",num);
	}
}
	return 0;
} 
