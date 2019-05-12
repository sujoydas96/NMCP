#include<stdio.h>
#include<math.h>
#include<conio.h>

//Program to implement the method of Successive Approximation

float g(float x);

int main()
{
    float x1,x2,e=0.00001;
    int i=1;
    puts("Enter the guess value");
    scanf("%f",&x1);
    x2=g(x1);

    while(fabs(x2-x1)>e)
    {
        x1=x2;
        printf("x%d = %f\n",i++,x2);
        x2=g(x1);
    }
    printf("\nThe root is %f",x2);

    getch();
    return 0;
}

float g(float x)
{
    return (exp(-x)+1)/2;               //change the function G when needed
}
