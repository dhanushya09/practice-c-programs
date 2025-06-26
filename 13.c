#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    if (a >= b)
        printf("%d is largest\n", a);
    if (b > a)
        printf("%d is largest\n", b);
    return 0;
}
