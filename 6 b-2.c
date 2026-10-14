#include<stdio.h>
long long fact (int n )
{
    if (n==0||n==1)
        return 1;
    return n*fact(n-1);
}
int main()
{
    int n;
    long long result;
    printf("enter a number");
    scanf("%d",&n);
    result = fact (n);
    printf("factorial of %d is %11d",n,result);
    return 0;
}
