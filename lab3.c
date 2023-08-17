// #include<stdio.h>
// #include<math.h>

// float func(float x)
// {
//     float f=pow(x,3)-4*pow(x,2)-x+10;
//     return f;
// }

// int main()
// {
//     float a,b,c,tol;
//     printf("Enter the precision value:");
//     scanf("%f",&tol);
//     printf("Enter the two initial guesses(a,b):");
//     scanf("%f,%f",&a,&b);

//     while((func(a)*func(b))>0){
//         printf("The initial guess couldn't resolve to roots.\nEnter the two initial guesses(a,b):");
//         scanf("%f,%f",&a,&b);
//     }
    
//     c=(a+b)/2;
//     while(fabs(func(c))>=tol)
//     {
//         if((func(a)*func(c))<0)
//         {
//             b=c;
//         }
//         else 
//         {
//             a=c;
//         }
//         c=(a+b)/2;
//     }
//     printf("\nThe root of the given function is %f",c);

// }






// #include<stdio.h>
// #include<math.h>

// float func(float x)
// {
//     float f=(1/x)+sin(x);
//     return f;
// }

// int main()
// {
//     float a,b,c,tol;
//     printf("Enter the precision value:");
//     scanf("%f",&tol);
//     printf("Enter the two initial guesses(a,b):");
//     scanf("%f,%f",&a,&b);

//     while((func(a)*func(b))>0){
//         printf("The initial guess couldn't resolve to roots.\nEnter the two initial guesses(a,b):");
//         scanf("%f,%f",&a,&b);
//     }
    
//     c=(a+b)/2;
//     int count=0;
//     while(fabs(func(c))>=tol)
//     {
//         if((func(a)*func(c))<0)
//         {
//             b=c;
//         }
//         else 
//         {
//             a=c;
//         }
//         c=(a+b)/2;
//         count+=1;
//     }
//     if(count==100)
//     {
//         print("The given function is discontinous in the given range.")
// ;    }
//     else
//     {
//     printf("\nThe root of the given function is %f",c);
//     }

// }

#include<stdio.h>
#include<math.h>
float f(float x)
{
    return (x*x+5*x);
}

void main()
{
    float a,b,c;
    printf("enter the interval (a,b):\n");
    scanf("%f,%f",&a,&b);
    if(f(a)*f(b)<0)
    {
        do
        {
          c=(a+b)/2;
          if(f(a)*f(c)<0)
          {
            b=c;
          }
          else
          {
            a=c;
          }
         int count=count+1;
         if( count==100)
         {
            printf("the function is discontinuous");
            exit(0);

         }
        }
        while(fabs(f(c))>0.00001 );

printf("the required solution is %f\n",c);
}
else
{
    printf("the root doesnot exist");
}
}