#include<stdio.h>
int main()
{
    int marks;
    scanf("%d",&marks);
    if(marks<=100 && marks >=92)
    printf("Grade O");
    else if(marks<=91 && marks >=82)
    printf("Grade S");
    else if (marks>=72 && marks<=81)
    printf("Grade A");
    else
    printf("fail");
}
