// #include<stdio.h>
// #include<math.h>
// #include<stdlib.h>

// float f(float x)
// {
//     float func;
//     func=x*exp(x)-cos(x);
//     // func=pow(x,3)-2*x-5;
//     // func=3*x-cos(x)-1;
//     return func;
// }

// int main()
// {
//     float a,b,c,tol;
//     int counter=0;
//     printf("Enter the precision value:");
//     scanf("%f",&tol);
//     printf("Enter the interval (a,b): ");
//     scanf("%f,%f",&a,&b);
   
//    while((f(a)*f(b))>0)
//     {
//         printf("The solution does not lie in this interval.\n");
//         printf("Enter the next interval (a,b): ");
//         scanf("%f,%f",&a,&b);
//     }

//     do
//     {
//         c=(a*f(b)-b*f(a))/(f(b)-f(a));
        
//         if(f(a)*f(c)<0)
//         {
//             b=c;
//         }
//         else
//         {
//             a=c;
//         }
//         counter=counter+1;
        
//         if(counter>100)
//         {
//             printf("\nThe solution does not exist.");
//             exit (0);
//         }
//     } while (fabs(f(c))>=tol);

//     printf("The required solution is %0.4f",c);
//     printf("\nThe no. of steps is %d",counter);
// }
  



#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float f(float x)
{
    float func;
    func=x*exp(x)-cos(x);
    // func=pow(x,3)-2*x-5;
    // func=3*x-cos(x)-1;
    return func;
}

int main()
{
    float a,b,c,tol;
    int counter=0;
    printf("Enter the precision value:");
    scanf("%f",&tol);
    printf("Enter the interval (a,b): ");
    scanf("%f,%f",&a,&b);
   
   if(fabs(f(a)-f(b))<0.0005)
    {
        printf("The solution is indefinite.");
        exit (0);
     
    }

    do
    { 
        c=(a*f(b)-b*f(a))/(f(b)-f(a));
        a=b;
        b=c;
        
        counter=counter+1;
        if(counter>100)
        {
            printf("\nThe solution does not exist.");
            exit (0);
        }
    } while (fabs(f(c))>=tol);

    printf("The required solution is %0.4f",c);
    printf("\nThe no. of steps is %d",counter);
}