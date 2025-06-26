#include<stdio.h>
#define max(a,b) ((a)>(b) ? (a) :(b))
int main()
{
 int a,b;
printf("enter a and b values:");
scanf("%d%d",&a,&b);
int result=max(a,b);
printf("largest number is %d :\n",result);
return 0;
}
