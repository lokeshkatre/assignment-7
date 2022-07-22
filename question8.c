#include <stdio.h>
int main()
{
    int n, a, flag, i;
    printf("Enter number :");
    scanf("%d", &n);
    a = n + 1;
    while (a > n)
    {
        flag = 0;
        i = 2;
        while (i <= a / 2)
        {
            if (a % i == 0)
            {
                flag++;
                break;
            }
            i++;
        }
        if (flag == 0 && i != 1)
        {
            printf("\nThe next prime number is %d\n", a);
            return 0;
        }
        a++;
    }
    return 0;
}