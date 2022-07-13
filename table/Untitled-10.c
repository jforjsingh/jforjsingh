#include<stdio.h>
int main ()
{
    int a,b,c;
printf ("enter three numbers\t");
scanf ("%d%d%d",&a,&b,&c);
if (a>b&&a>c)
{
    printf("%d, maximum number ",a);
}
else if(b>a&&b>c){
    printf("%d,maximum number ",b);
} 

else {
    printf( "%d, maximum number",c);
}
return 0;
}
