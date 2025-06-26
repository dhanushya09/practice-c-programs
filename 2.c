#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int a,b,c;
    printf("enter a,b and c values:");
    scanf("%d %d %d", &a, &b,&c);
    printf("before swap: a=%d ,b=%d ,c=%d" ,a,b,c);
    a=a+b;
    b=b+c;
    c=b-c;
    b=a-c;
    printf("after swap: a=%d,b=%d ,c=%d",a,b,c);
    return 0;
}

