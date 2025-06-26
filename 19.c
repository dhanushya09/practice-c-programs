#include<stdio.h>
int main()
{
    int marks;
    scanf("%d",&marks);
    if(marks>=92)
    printf("O");
    else if(marks>=80)
    printf("S");
    else
    printf("fail");
}
