#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float f(float x,float y,float z)
{
    float func;
    func=z;
    return func;
}

float g(float x,float y, float z)
{
    float gfun;
    // gfun=3*x+4*y-z;
    // gfun=6*x+3*y-2*z;
    gfun=-(x*z+y);
    return gfun;
}

int main()
{
    int n,i;
    float x0,y0,z0,yn,zn,xn,h;
    float k1,k2,k3,k4,k,l1,l2,l3,l4,l;
    printf("Enter the initial conditions for ODE(x0,y0,z0):");
    scanf("%f,%f,%f",&x0,&y0,&z0);
    printf("Enter the calculation point(xn):");
    scanf(" %f",&xn);
    printf("Enter the number of steps to be carried to solve the equation:");
    scanf("%d",&n);
    h=(xn-x0)/n;
    for(i=1;i<=n;i++)
    {
        k1=h*f(x0,y0,z0);
        l1=h*g(x0,y0,z0);
        
        k2=h*f(x0+h/2,y0+k1/2,z0+l1/2);
        l2=h*g(x0+h/2,y0+k1/2,z0+l1/2);
        
        k3=h*f(x0+h/2,y0+k2/2,z0+l2/2);
        l3=h*g(x0+h/2,y0+k2/2,z0+l2/2);
        
        k4=h*f(x0+h,y0+k3,z0+l3);
        l4=h*g(x0+h,y0+k3,z0+l3);

        k=(k1+2*k2+2*k3+k4)/6;
        l=(l1+2*l2+2*l3+l4)/6;
        
        yn=y0+k;
        zn=z0+l;
     
        x0+=h;
        y0=yn;
        z0=zn;

    }
    printf("\nThe functional value is %.4f and the differentiation at that point is %.4f.",y0,z0);
}