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
    printf("Enter the limits of intergration:");
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
