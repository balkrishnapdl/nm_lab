
/*
#include<stdio.h> 

float slope(float x, float y)
    {
        return  x + y ;
    }

int main()
    {
        float xo, yo, xn,yn , h ; 
        printf("Enter the initial value of the function (xo,y0): ");
        scanf("%f,%f",&xo,&yo);
        printf("\nEnter the value of calculation point(xn) = ") ; 
        scanf("%f",&xn);
        printf("\nEnter the step size value (h) = ") ; 
        scanf("%f",&h);
        while(xo<xn)
        {
            yn = yo + h * slope(xo,yo); 
            yo = yn;
            xo=xo+h;
        }
    printf("\n the value of y = %f ",yn);
}*/



#include<stdio.h> 
#include<math.h>
int main()
    {
        int n,i,j;
        float x[100],y[100],xn,yn = 0,p;
        printf("Enter the number of data to be entered(n) = ");
        scanf("%d",&n);
        printf("\nEnter the set of data\n");
        for (i = 0 ; i<=n-1 ; i++)
            {
                printf("x%d = ",i);
                scanf("%f",&x[i]);
                printf("y%d = ",i);
                scanf("%f",&y[i]);
            }
        printf("Enter the point to be interpolated (xn) = ");
        scanf("%f",&xn);
        for(i = 0 ; i<=n-1 ; i++)
        {
                p=1;
                j=0;
                while(j<n)
                {
                    if(i!=j)
                    {
                        p =p * (xn-x[j])/(x[i]-x[j]);
                    }
                    j=j+1;
                }   
                yn = yn + p*y[i] ;            
            }

        printf("The interpolated value yn = %f",yn);
    }