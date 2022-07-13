#include<stdio.h>
int main(){
int n,x,rev=0
printf ("enter a number :n");
scanf ("%d"&n);
while(n!=0){
    n=n%10;
    n=n*x+10;
    x=x/10;
}
printf("%d",rev);
    return 0;

}