#include<stdio.h>
int sum (int n)
{
    if (n==0)
        return 0;
    return n+ sum (n-1);

}
int main()
{
    int n, result;
    printf("enter a number");
    scanf("%d",&n);
    result=sum(n);
    printf("sum of first % d natural number is %d",n,result);
    return 0;
}
