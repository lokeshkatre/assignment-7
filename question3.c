#include <stdio.h>
int main()
{
    int n, first = 0, second = 1, fib, flag = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    while (fib <= n)
    {
        fib = first + second;
        first = second;
        second = fib;
        if (fib == n)
        {
            flag = 1;
        }
    }
    if (flag == 1)
        printf("number is part of fibonacci series");
    else
        printf("number is NOT part of fibonacci series");

    return 0;
}