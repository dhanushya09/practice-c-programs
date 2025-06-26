#include<stdio.h>
#include<stdlib.h>
 int main()
{
int a,b,min,max;
printf("enter a and b values:");
scanf("%d %d ",&a,&b);
max=(a+b+abs(a-b))/2;
min=(a+b-abs(a-b))/2;
printf("maximum value:%d",max);
printf("minimum value:%d",min);
return 0;
}
