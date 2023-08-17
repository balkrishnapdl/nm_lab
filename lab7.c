#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,k,n;
    float A[100][100],ratio,x[100];
    printf("\nEnter the number of total unknowns: ");
    scanf("%d",&n);
    printf("\nEnter the elements of augmented matrix row-wise:\n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=(n+1); j++)
        {
            printf(" A[%d][%d]:", i,j);
            scanf("%f",&A[i][j]);
        }
    }
    /* Now finding the elements of diagonal matrix */
    for(j=1; j<=n; j++)
    {
        if (A[j][j]==0)
        {
            printf("\nMathematical error");
            exit(0);
        }
        for(i=1; i<=n; i++)
        {
            if(i!=j)
            {
                ratio=A[i][j]/A[j][j];
                for(k=1; k<=n+1; k++)
                {
                    A[i][k]=A[i][k]-ratio*A[j][k];
                }
            }
        }
    }
    printf("\nThe solution is:\n");
    for(i=1; i<=n; i++)
    {
        x[i]=A[i][n+1]/A[i][i];
        printf("\n x%d=%f\n",i,x[i]);
    }
    return(0);
}