#include<stdio.h>

/* Fitting a Straight Line . Find the values of the constants in the normal formula*/


//easy version

int main()
{
    // get the input for the array first
    float a ,b ,y[15], sum_y, sum_xy=0;
    int n, i, x[15], sum_x=0, sum_x_sqrt=0;
    puts("Enter the number of data:");
    scanf("%d",&n);

    puts("Enter the number of values of x in the data:");
    for(i=0;i<n;i++)
        scanf("%d",&x[i]);
    puts("Enter the number of values of y in the data:");
    for(i=0;i<n;i++)
        scanf("%f",&y[i]);

    for(i=0;i<n;i++)
    {
        sum_y += y[i];
        sum_x += x[i];
        sum_xy += x[i]*y[i];
        sum_x_sqrt += x[i]*x[i];
    }

    a = (sum_x*sum_xy - sum_y*sum_x_sqrt)/(sum_x*sum_x - n*sum_x_sqrt);
    b = (sum_x*sum_y - n*sum_xy)/(sum_x*sum_x - n*sum_x_sqrt);

    printf("Answer for a = %f\n",a);
    printf("Answer for b = %f\n",b);
}
