#include<stdio.h>
void main()
{
  float x, y, z, sum, avg;


  printf("Enter three Numbers: ");
  scanf("%f %f %f",&x, &y, &z);

  sum = x + y + z;

  avg = sum/3;

  printf("Entered numbers are: %.2f, %.2f and %.2f\n",
           x, y, z);

  printf("Sum=%.2f\n", sum);
  printf("Average=%.2f\n",avg );
}
