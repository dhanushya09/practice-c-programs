#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
int a,b;
printf("enter the a and b values:");
scanf("%d%d",&a,&b);
while(b!=0)
while(b!=0)
{
int carry=a&b;
a=a^b;
b=carry<<1;
}
printf("sum:%d",a);
return 0;
}
