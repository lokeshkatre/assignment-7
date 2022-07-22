#include <stdio.h>
int main()
{
    int n, r, num, sum = 0;
    printf("Armstrong numbers from 0 to 1000 are:\n");
    for (n = 1; n <= 1000; n++)
    {
        num = n;
        while (n > 0)
        {
            r = n % 10;
            sum = sum + r * r * r;
            n = n / 10;
        }
        n = num;

        if (num == sum)
            printf("%d ", n);
        sum = 0;
    }
    return 0;
}