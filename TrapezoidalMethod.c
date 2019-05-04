#include<stdio.h>
#include<conio.h>

//Program to implement Trapezoidal Method

float f(float x);

void main()
{
    float x0,xn,h,sum=0,ans;
    int i,n;
    fputs("\nEnter the lower and upper limit: ",stdout);
    scanf("%f%f",&x0,&xn);
    fputs("\nEnter the number of intervals: ",stdout);
    scanf("%d",&n);
    h=(xn-x0)/n;

    for(i=1;i<=(n-1);i++)
        sum=sum+f(x0+i*h);

    ans=(h/2)*(f(x0)+f(xn)+2*sum);
    printf("\n Required integration is: %f",ans);
    getch();
}

float f(float x)
{
    return 1/(1+x*x);               //Change the function when needed
}
