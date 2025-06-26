#include<stdio.h>
#define check_even_odd(num) ((num) % 2 == 0 ? "Even" : "Odd")
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The number %d is %s.\n",num , check_even_odd( num));
    return 0;
}
