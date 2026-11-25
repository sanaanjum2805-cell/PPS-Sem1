#include<stdio.h>
void main()
{
    int A[5],key,i,s=0;
    printf("enter 5 values");
    for (i=0;i<5;i++)
    scanf("%d",&A[i]);
    printf("enter searching ele");
    scanf("%d",&key);
    for (i=0;i<5;i++)
    {
        if(key==A[i])
        {
            s=1;
            break;
        }
    }
    if(s==1)
        printf("ele found at%d",i+1);
    else
        printf("ele not available");

}
