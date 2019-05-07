#include<stdio.h>
#include<math.h>

float f(float x, float y);

int main()
{
  int i = 0;
  float x0, y0, x1, y1, xn, h;
  puts("Enter the initial value of x and y :");
  scanf("%f%f", &x0, &y0);
  puts("Enter the step length :");
  scanf("%f", &h);
  puts("Enter the value of x for which y is required :");
  scanf("%f", &xn);

  while (x0 <= xn)
  {
    y1 = y0 + h * f(x0, y0);
    x1 = x0 + h;
    x0 = x1;
    y0 = y1;

    printf("\nWhen x(%d) = %f\tThen y(%f) = %f", i++, x0, x0, y0);
  }

  return 0;
}

float f(float x, float y)
{
  return (x + y);               //Change function when needed
}
