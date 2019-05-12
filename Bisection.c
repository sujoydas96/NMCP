#include<stdio.h>
#include<math.h>
#include<conio.h>

//Bisection Method

float fun(float x);

int main()
{
    float x,x1,x2,f,f1,f2,e=0.00001;
    int i=1;
    puts("Enter the two guess values");
    scanf("%f%f",&x1,&x2);

    x=(x1+x2)/2;
    f1=fun(x1);
    f2=fun(x2);
    f=fun(x);

    if(f1*f2<0)
        while(fabs(x2-x1)>e)
        {
            if(f*f1<0)
                x2=x;
            else
                x1=x;

            x=( x1+x2 )/2;
            f1=fun(x1);
            f2=fun(x2);
            f=fun(x);
            printf("\nThe required solution is %f",x);
        }
    printf("\nThe required solution is %f",x);
    getch();
    return 0;
}

float fun(float x)
{
    return x*x*x-4*x+1;             //change the function when needed
}
