#include<stdio.h>
int main()
{
    int n,r,num ,sum=0;
    printf("Enter number :");
    scanf("%d",&n);
    num=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
    if(num==sum)
    printf("\nThe number is armstrong number");
    else 
    printf("\nThe number is not a armstrong number");
    
    return 0;
}