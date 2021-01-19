#include<stdio.h>
void main()
{
  float pie = 3.1416;
  float rad;
  float area;


  printf("Enter radius: ");
  scanf("%f",&rad);

  area = pie * rad * rad;

  printf("area: %.2f\n",area );
}
