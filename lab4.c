/*#include <stdio.h>
#include <math.h>

float func(float x)
{
    float f=sin(x)-3*x+2;
    return f;
}

float derivative(float x) 
{
    float d=cos(x)-3;
    return d;
}


int main()
{
    float t,x;
    int i,count=0,a,b;
    char c;
   do
    {
        printf("Enter the two initial integer guesses within which the root may lie(a,b):");
        scanf("%d,%d",&a,&b);
        printf("The functional value within the guesses are:\n");
        for(i=a;i<=b;i++)
        {
            printf("f(%d)=%f\n",i,func(i));
        }
        printf("Did you find the initial guess root?(y/n):");
        scanf(" %c",&c);
    }while(c=='n');

    printf("Enter initial point:");
    scanf("%f",&x);
    printf("Enter error tolerance:");
    scanf("%f",&t);
    if (t == 0.0)
    {
        printf("Error tolerance must be greater than 0");
        return -2;
    }
    while( fabsf(func(x)) > t)
    {
        printf("%f f(x) %f and derivate is %f\n",x,func(x),derivative(x));
        if( derivative(x)== 0.0)
        {
            printf("root of required precision could not be found\n");
            break;
        }
        x -= func(x)/derivative(x);
        count+=1;
        if (count==100)
        {
            printf("Could not find answer in %i iteration",count);
            break;
        }
    }
    printf("The required root of the equation is %f at which f(x) is %f",x,func(x));
    return 0;
}
*/




#include<stdio.h>
#include<math.h>

float  func(float x,float y) 
{
    float f=y*x;
    return f;
}

int main()
{
    float x0, y0, xn, h, yn, k1, k2, k3, k4, k;
    int i, n;
    printf("Enter Initial Conditions (x0,y0):");
    scanf("%f,%f",&x0,&y0);
    printf("Enter calculation point xn = ");
    scanf("%f",&xn);
    printf("Enter number of steps: ");
    scanf("%d",&n);
    h = (xn-x0)/n;
    printf("\nx0\ty0\tyn\n");
    for(i=0; i < n; i++)
    {
        k1 = h * (func(x0, y0));
        k2 = h * (func((x0+h/2), (y0+k1/2)));
        k3 = h * (func((x0+h/2), (y0+k2/2)));
        k4 = h * (func((x0+h), (y0+k3)));
        k = (k1+2*k2+2*k3+k4)/6;
        yn = y0 + k;
        printf("%0.4f\t%0.4f\t%0.4f\n",x0,y0,yn);
        x0 = x0+h;
        y0 = yn;
}
printf("\nValue of y at x = %0.2f is %0.3f",xn, yn);
return 0;
}