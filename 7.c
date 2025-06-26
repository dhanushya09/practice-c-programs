 #include <stdio.h>
#define op(a,b)(a*b)
int main()
{
int x,y;
printf("enter x and  y values:");
scanf("%d%d",&x,&y);
int mul=op(x,y);
printf("sum is ;%d \n",mul);
return 0;
}