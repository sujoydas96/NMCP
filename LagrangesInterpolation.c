#include<stdio.h>

int main()
{
  int i, j, n;
  float x[10], y[10], prod, sum = 0, ax;

  puts("Enter number of data : ");
  scanf("%d", &n);
  puts("Enter the independent variable values( values of x ) :");
  for (i = 0; i < n; i++)
    scanf("%f", &x[i]);
  puts("Enter the dependent variable values( values of y ) :");
  for (i = 0; i < n; i++)
    scanf("%f", &y[i]);
  puts("Enter the required value of the independent variable : ");
  scanf("%f", &ax);

  for (i = 0; i < n; i++)
  {
    prod = 1;
    for (j = 0; j < n; j++)
      if (i != j)
        prod = prod * (ax - x[j]) / (x[i] - x[j]);
    sum += prod * y[i];
  }

  printf("The required dependent variable value is : %f", sum);
  puts("\n");
  return 0;
}
