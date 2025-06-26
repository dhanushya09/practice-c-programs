#include<stdio.h>
int main()
{
 int a,b;
printf("enter a and b values:");
scanf("%d%d",&a,&b);
int max=(a>b)?a:b;
printf("largest number is %d :\n",max);
return 0;
}