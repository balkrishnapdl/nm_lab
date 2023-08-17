#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,j;
    float a[100][100],x[100],z[100],y[100],d[100],tol,sum,Zmax,dmax,count=0;
    
    printf("Enter the tolerance value:");
    scanf("%f",&tol);
    printf("\nEnter the order of the matrix:");
    scanf("%d",&n);
    printf("\nEnter the matrix:\n");
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }

    printf("\nEnter the initial guesses:\n");
    for (i=1;i<=n;i++)
    {
        scanf("%f",&x[i]);
    }

    //iterating
    do
    {
        //Matrix Multiplication
        for(i=1;i<=n;i++)
        {
            sum=0;
            for(j=1;j<=n;j++)
            {
                sum=sum+a[i][j]*x[j];
            }
            z[i]=sum;
        }

        //finding the largest of the new matrix
        Zmax=z[1];
        for(i=1;i<=n;i++)
        {
            if(z[i]>Zmax)
            {
                Zmax=z[i];
            }
        }

        //Finding the Scalling matrix
        for(i=1;i<=n;i++)
        {
            y[i]=(fabs(z[i]))/Zmax;
        }

        //finding the difference of the matrix
        for(i=1;i<=n;i++)
        {
            d[i]=fabs(x[i]-y[i]);
        }

        //finding the highest difference
        dmax=d[i];
        for(i=1;i<=n;i++)
        {
            if(d[i]>dmax)
            {
                dmax=d[i];
            }
        }

        //Equating the matrix
        for(i=1;i<=n;i++)
        {
            x[i]=y[i]; 
        }

        count=count+1;
        if(count>=100)
        {
            printf("Sorry!Long Process.");
            return 0;
        }
    } while (dmax>=tol);

    printf("\nThe eigen value is %f.",Zmax);
    printf("\nThe eigen vector is:\n");
    for(i=1;i<=n;i++)
    {
        printf("%f\t",y[i]);
    }
    return 0;
}