#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    for(int row=num;row>=2;row--)
    {
        for(int s1=num;s1>row;s1--)
        {
            printf("%d ",s1);
        }
        for(int s2=1;s2<2*row;s2++)
        {
            printf("%d ",row);
        }
        for(int s3=row+1;s3<=num;s3++)
        {
            printf("%d ",s3);
        }
        printf("\n");
    }
    for(int row=1;row<=num;row++)
    {
        for(int s1=num;s1>row;s1--)
        {
            printf("%d ",s1);
        }
        for(int s2=1;s2<2*row;s2++)
        {
            printf("%d ",row);
        }
        for(int s3=row+1;s3<=num;s3++)
        {
            printf("%d ",s3);
        }
        printf("\n");
    }
    return 0;
}
