#include<stdio.h>
#include<math.h>
#include<conio.h>

//Program for Newton-Raphson method

float f(float x);
float fd(float x);

int main()
{
    float x1,x2;
    const float e=0.00001;
    puts("Enter the guess value");
    scanf("%f",&x1);
    x2=x1-(f(x1)/fd(x1));

    while(fabs(x2-x1)>e)
    {
        x1=x2;
        x2=x1-(f(x1)/fd(x1));
        printf("The required solution is %f\n",x2);
    }

    getch();
    return 0;
}

float f(float x)
{
    return x*x*x-3*x+1.06;           // change function when needed
}
float fd(float x)
{
    return 3*x*x-3;                    //change the first derivative when main function is changed
}
