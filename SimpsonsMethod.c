#include<stdio.h>
#include<conio.h>

// Program to implement Simpson's method

float f(float x);

void main()
{
    float x0,xn,h,ans,sum_odd=0,sum_even=0;
    int i,n;
    fputs("\nEnter the lower and upper limit: ",stdout);
    scanf("%f%f",&x0,&xn);
    fputs("\nEnter the number of intervals: ",stdout);
    scanf("%d",&n);
    h=(xn-x0)/n;

    for(i=1;i<=(n-1);i++)
        if(i%2==0)
            sum_even=sum_even+f(x0+i*h);
        else
            sum_odd=sum_odd+f(x0+i*h);

    ans=(h/3)*(f(x0)+f(xn)+2*sum_even+4*sum_odd);
    printf("\n Required integration is: %f",ans);
    getch();
}

float f(float x)
{
    return 1/(1+x*x);               //Change the function here when required
}
