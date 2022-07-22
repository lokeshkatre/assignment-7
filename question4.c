#include<stdio.h>
int main()
{
    int n1,n2,min,hcf;
    printf("Enter numbers:");
    scanf("%d%d",&n1,&n2);
    min=(n1>n2)?n2:n1;
    
    for (int i = 1; i <=min ; i++)
    {
        if (n1%i==0 && n2%i==0)
        {
           hcf=i;
        }
        
    }
    printf("HCF of %d and %d is %d",n1,n2,hcf);
    return 0;
}