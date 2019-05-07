#include <stdio.h>
#include <math.h>

float f(float x, float y);

int main()
{
  float x0, y0, xn, h, k1, k2, k3;
  puts("Enter initial value of x and y : ");
  scanf("%f%f", &x0, &y0);
  puts("Enter the step length : ");
  scanf("%f", &h);
  puts("Enter the value of xn for which y is required : ");
  scanf("%f", &xn);

  while (x0 <= xn)
  {
    printf("\nWhen x = %f\tThen y(%f) = %f", x0, x0, y0);

    k1 = h * f(x0, y0);
    k2 = h * f(x0 + (h / 2), y0 + (k1 / 2));
    k3 = h * f(x0 + h, y0 - k1 + 2 * k2);

    y0 = y0 + (1.0 / 6.0) * (k1 + 4 * k2 + k3);
    x0 = x0 + h;
  }

  puts("\n");
  return 0;
}

float f(float x, float y)
{
  return x + y*y;         //Change function when needed
}
