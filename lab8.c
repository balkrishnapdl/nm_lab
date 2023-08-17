// #include<stdio.h>
// #include<math.h>

// int main()
// {
//     int i,j,k,n;
//     double a[100][100],x[100];
//     float s,ratio;
//     printf("Enter the number of unknowns:");
//     scanf("%d",&n);
//     printf("\nEnter the augmented matrix:\n");
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=n+1;j++)
//         {
//             scanf("%lf",&a[i][j]);
//         }
//     }
//     for(j=1;j<=n-1;j++)
//     {
//         if(fabs(a[j][j])<=0.0005)
//         {
//             printf("Mathematical Error!!!");
//             return 0;
//         }
//         for(i=j+1;i<=n;i++)
//         {
//            if(i!=j)
//             {
//                 ratio=a[i][j]/a[j][j];
//                 for(k=1;k<=n+1;k++)
//                 {
//                     a[i][k]=a[i][k]-ratio*a[j][k];
//                 }
//             }
//         }
//     }
//     x[n]=a[n][n+1]/a[n][n];
//     for(i=n-1;i>=1;i--)
//     {
//         s=0;
//         for(j=i+1;j<=n;j++)
//         {
//             s=s+a[i][j]*x[j];
//         }
//         x[i]=(a[i][n+1]-s)/a[i][i];
//     }
//     printf("\nThe solution of the set of the equation is:\n");
//     for(i=1;i<=n;i++)
//     {
//         printf("x[%d]:%lf\n",i,x[i]);
//     }
//   return 0;
// }



// #include<stdio.h>
// #include<math.h>

// float f(float x)
// {
//     float func=(1+pow(x,3));
//     return func;
// }
// int main()
// {
//     float a,b,s1,s2,I,h;
//     int n,i;
//     printf("Enter the limits of intergration(a,b):");
//     scanf("%f,%f",&a,&b);
//     printf("Enter the number of steps:");
//     scanf("%d",&n);
//     h=(b-a)/n;
//     s1=f(a)+f(b);
//     s2=0;
//     for(i=1;i<n;i++)
//     {
//         s2=s2+f(a+i*h);
//     }
//     I=(h/2)*(s1+2*s2);
//     printf("The required value of integration using trapezoidal rule is %f",I);
//     return 0;
// }



// #include<stdio.h>
// #include<math.h>

// int main()
// {
//     float x0,xn,s1=0,s2=0,I,h,y[100];
//     int n,i;
//     printf("Enter the value of upper and lower limit(x0,xn):");
//     scanf("%f,%f",&x0,&xn);
//     printf("Enter the number of ordinates:");
//     scanf("%d",&n);
//     printf("Enter the functional values in order:\n");
//     for(i=0;i<n;i++)
//     {
//         scanf("%f",&y[i]);
//     }

//     h=(xn-x0)/(n-1);
//     s1=y[0]+y[n-1];
//     for(i=1;i<n-1;i++)
//     {
//         s2=s2+y[i];
//     }
//     I=(h/2)*(s1+2*s2);
//     printf("The required value of integration is %f",I);
//     return 0;

// }


// #include<stdio.h>
// #include<math.h>
// float f(float x)
// {
//     return (exp(-x*x));
// }
// int main()
// {
//     float a,b,s1=0,s2=0,s3=0,I,h;
//     int n,i;
//     printf("Enter the limits of intergration(a,b):");
//     scanf("%f,%f",&a,&b);
//     printf("Enter the number of steps:");
//     scanf("%d",&n);
//     while(n%2!=0)
//     {
//         printf("Sorry.Enter the even number of steps:");
//         scanf("%d",&n);
//     }

//     h=(b-a)/n;
//     s1=f(a)+f(b);
//     for(i=1;i<n;i++)
//     {
//         if(i%2==0)
//         {
//             s2=s2+f(a+i*h);
//         }
//         else
//         {
//             s3=s3+f(a+i*h);
//         }
//     }
//     I=(h/3)*(s1+4*s3+2*s2);
//     printf("The required value of integration using simpson's 1/3 rule is %f",I);
//     return 0;

// }


#include<stdio.h>
#include<math.h>
float f(float x)
{
    return (1/(1+pow(x,2)));
}
int main()
{
    float a,b,s1=0,s2=0,s3=0,I,h;
    int n,i;
    printf("Enter the limits of integration(a,b):");
    scanf("%f,%f",&a,&b);
    printf("Enter the number of steps:");
    scanf("%d",&n);
    while(n%3!=0)
    {
        printf("Sorry.Enter the even number of steps:");
        scanf("%d",&n);
    }

    h=(b-a)/n;
    s1=f(a)+f(b);
    for(i=1;i<n;i++)
    {
        if(i%3==0)
        {
            s2=s2+f(a+i*h);
        }
        else
        {
            s3=s3+f(a+i*h);
        }
    }
    I=(3*h/8)*(s1+3*s3+2*s2);
    printf("The required value of integration using simpson's 3/8 rule is %f",I);
    return 0;

}
