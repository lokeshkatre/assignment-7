#include<stdio.h>
int main()
{
    
    int i, n1,n2, flag;
    printf("Enter range for prime numbers\n");
    scanf("%d%d",&n1,&n2);
    printf("\nprime numbers between two numbers is:\n");
    while (n1 <= n2)
    {
        flag = 0;
        i = 2;
        while (i <= n1 / 2)
        {
            if (n1 % i == 0)
            {
                flag++;
                break;
            }
            i++;
        }
        if (flag == 0 && n1 != 1)
        {
            printf(" %d ", n1);
        }
        n1++;
    }
    return 0;
}