// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int i,j,k,n;
//     double a[100][100];
//     float temp,d;
//     printf("Enter the order of square matrix:");
//     scanf("%d",&n);
//     printf("Enter the matrix rowwise:\n");
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=n;j++)
//         {
//             scanf("%lf",&a[i][j]);
//         }
//     }
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=n;j++)
//         {
//             if(j==i)
//             {
//                 a[i][j+n]=1;
//             }
//             else
//             {
//                 a[i][j+n]=0;
//             }
//         }
//     }
//     /*printf("\nAugumented matrix\n");
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=2*n;j++)
//         {
//             printf("a[%d][%d]:%.2lf\t",i,j,a[i][j]);
//         }
//         printf("\n");
//     }*/
//     for(j=1;j<=n;j++)
//     {
//         if(fabs(a[j][j])<=0.0005)
//         {
//             printf("Error!");
//             return 0;
//         }
//         for(i=1;i<=n;i++)
//         {
//             if(i!=j)
//             {
//                 temp=a[i][j]/a[j][j];
//             }
//             for(k=1;k<=2*n;k++)
//             {
//                 a[i][k]=a[i][k]-temp*a[j][k];
//             }
//         }
//     }
//     for(i=1;i<=n;i++)
//     {
//         d=a[i][i];
//         for(j=1;j<=2*n;j++)
//         {
//             a[i][j]=a[i][j]/d;
//         }
//     }
//     printf("Inverse matrix\n");

//     for(i=1;i<=n;i++)
//     {
//         for(j=n+1;j<=2*n;j++)
//         {
//             printf("%.2lf\t",a[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }


#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,n,d;
    float a[100][100],x[100],y[100],z[100],temp;
    printf("Enter the number of data point:");
    scanf("%d",&n);
    printf("Enter the values of x and y:\n");
    for(i=0;i<=n-1;i++)
    {
        printf("x[%d],y[%d]:",i,i);
        scanf("%f,%f",&x[i],&y[i]);
    }
    printf("Enter the degree of polynomial:");
    scanf("%d",&d);
    if(n<=d)
    {
        printf("No sufficient data!");
        return 0;
    }
    for(i=0;i<=d;i++)
    {
        for(j=0;j<=d;j++)
        {
            a[i][j]=0;
            for(k=0;k<=n-1;k++)
            {
                a[i][j]=a[i][j]+pow(x[k],i+j);
            }
        }
    }
    for(i=0;i<=d;i++)
    {
        a[i][d+1]=0;
        for(k=0;k<=n-1;k++)
        {
            a[i][d+1]=a[i][d+1]+pow(x[k],i)*y[k];
        }
    }
    // printf("\n Augumented matrix\n");
    // for(i=0;i<=d;i++)
    // {
    //     for(j=0;j<=d+1;j++)
    //     {
    //         printf("a[%d][%d]:%.2f\t",i,j,a[i][j]);
    //     }
    //     printf("\n");
    // }
     for(j=0;j<=d;j++)
    {
        if(fabs(a[j][j])<=0.0005)
        {
            printf("Mathematical Error!!!");
            return 0;
        }
        for(i=0;i<=d;i++)
        {
            if(i!=j)
            {
                temp=a[i][j]/a[j][j];
                for(k=0;k<=d+1;k++)
                {
                    a[i][k]=a[i][k]-temp*a[j][k];
                }
            }
        }
    } 
    for(i=0;i<=d;i++)
    {
        for(j=0;j<=d+1;j++)
        {
            z[i]=a[i][d+1]/a[i][i];
        }
    }
    printf("\nThe coefficient of polynomial are:\n");
    for(i=0;i<=d;i++)
    {
        printf("z[%d]:%.2f\n",i,z[i]);
    }
    return 0;
}