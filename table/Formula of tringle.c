#include<stdio.h>
#include<math.h>
int main(){
    float a, b, c, s,area;
    printf("enter three sides of tringle a, b, c:");
    scanf("%f%f%F",&a,&b,&c);
s = (a*b*c)/2;
area = sqrt(s*(s-a)*(s-b)*(s-c));
printf("The area of the tringle is :%.2f",area);
return 0;

}