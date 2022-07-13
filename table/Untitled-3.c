#include<stdio.h>
int main()
{
int n,s,r,x;
printf("Armstrong numbers are\n");
for(n=1;n<=100;n++){
    s=0;
    x=n;
    while(x!=0){
        r=n%10;
        s=s+r*r*r;
        x=x/10;
    }
}
if(s==n)
printf("%d\n",n);
  return 0;
}