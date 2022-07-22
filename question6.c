#include <stdio.h>

int main()
{
    int i, a = 1, flag;
    while (a <= 100)
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
        if (flag == 0 && a != 1)
        {
            printf(" %d ", a);
        }
        a++;
    }
    return 0;
}