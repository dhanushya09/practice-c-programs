#include<stdio.h>
int scan();
int factorial(int);
int main()
{
    int num=scan();
    int result=factorial(num);
    printf("%d",result);
}
int factorial(int num)
{
  int fact=1;
  for(int itr=1;itr<=num;itr++)
  {
  fact *= itr;
  }
return fact;
}
int scan()
{
    int num;
    scanf("%d",&num);
    return num;
}