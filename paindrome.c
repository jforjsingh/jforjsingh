#include <stdio.h>

int main() {
	int n,s=0,r,c;
	printf (" enter a numbes :");
	scanf ("%d",&n);
	c=n;
	while(n>0){
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	if (c==s)
	printf("the number is palindrome" );
	else
	printf("the number is not palindrome ");
	return 0;
}
