#include<stdio.h>
int main()
{
    int n,first=0,second=1,fib;
    printf("Enter term in fibonacci series:");
    scanf("%d",&n);
    
    for (int i = 1; i <= n; i++)
    {
       if(i<=1)
       fib=1;
       else
       fib=first + second;
       first= second;
       second=fib;
    }
    printf("The %d no. term is %d",n,fib);
    
    return 0;
}