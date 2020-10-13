#include <stdio.h>

int main()
{
    int n, sum = 0, r, temp;

    printf("enter a no");
    scanf("%d", &n);
    temp = n;
    while (n != 0)
    {
        r = n % 10;
        sum = sum + r * r * r;
        n = n / 10;
    }
    if (sum == temp)
        printf("%d is an armstrong number", temp);
    else
    {
        printf("%d is an armstrong number", temp);
    }
    return 1;
}