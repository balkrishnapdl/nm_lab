



/*//least square method linear curve fitting
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    printf("Enter the number of data:");
    scanf("%d",&n);
    float a,b,x[n],y[n];
    printf("Input all the values:\n");
    for(i=0;i<n;i++)
    {
        printf("x[%d]:",i);
        scanf("%f",&x[i]);
        printf("y[%d]:",i);
        scanf("%f",&y[i]);
    }
    float sumx,sumy,sumxy,sumxx;
    sumx=sumy=sumxy=sumxx=0;
    for(i=0;i<n;i++)
    {
        sumx=sumx+x[i];
        sumy=sumy+y[i];
        sumxy=sumxy+x[i]*y[i];
        sumxx=sumxx+x[i]*x[i];
    }
    a=((sumy*sumxx)-sumxy*sumx)/((n*sumxx)-pow(sumx,2));
    b=((sumx*sumy)-(n*sumxy))/((pow(sumx,2))-(n*sumxx));
    printf("The equation of line is y=%f + %fx",a,b);
    return 0;
}*/

//least square method exponential curve fitting
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    printf("Enter the number of data:");
    scanf("%d",&n);
    float a,A,b,x[n],y[n],Y[n];
    printf("Input all the values:\n");
    for(i=0;i<n;i++)
    {
        printf("x[%d]:",i);
        scanf("%f",&x[i]);
        printf("y[%d]:",i);
        scanf("%f",&y[i]);
        Y[i]=log(y[i]);
    }
    float sumx,sumY,sumxY,sumxx;
    sumx=sumY=sumxY=sumxx=0;
    for(i=0;i<n;i++)
    {
        sumx=sumx+x[i];
        sumY=sumY+Y[i];
        sumxY=sumxY+x[i]*Y[i];
        sumxx=sumxx+x[i]*x[i];
    }
    A=((sumY*sumxx)-sumxY*sumx)/((n*sumxx)-pow(sumx,2));
    b=((sumx*sumY)-(n*sumxY))/((pow(sumx,2))-(n*sumxx));
    a=exp(A);
    printf("The equation of line is y=%f + %fx",a,b);
    return 0;
} 