#include<stdio.h>
#include<conio.h>
#include<math.h>

//Secant method

float f(float x);

int main()
{
    float x1,x2,x3;
    int i=1;
    const float e=0.00001;
    puts("Enter two guess values:");
    scanf("%f%f",&x1,&x2);
    x3=x1*f(x2)-x2*f(x1)/(f(x2)-f(x1));
    printf("The root after iteration %d is %f\n",i,x3);

    while(fabs(x3-x2)>e)
    {
        i++;
        x1=x2;
        x2=x3;
        x3=(x1*f(x2)-x2*f(x1))/(f(x2)-f(x1));
        printf("The root after iteration %d is %f\n",i,x3);
    }
    getch();
    return 0;
}

float f(float x)
{
    return (exp(-x)-x);                 //change the function when needed
}
