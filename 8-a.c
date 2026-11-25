#include<stdio.h>
void main()
{
    int M[3][3],i,j,z=0,nz=0;
    printf("enter 3X3 matrix elements");
    for(i=0;i<3;i++);
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&M[i][j]);
            if(M[i][j]==0)
                z++;
            else
                nz++;
        }
    }
    printf("\n matrix is=\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d",M[i][j]);
        printf("\n");
    }
    printf("no. of zeroes=%d",z);
    printf("no. of non zero elements=%d",nz);
    if (z>nz)
        printf("\matrix is sparse");
    else
        printf("\ngiven is not a sparse");




}
