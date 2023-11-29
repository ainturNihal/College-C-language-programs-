

#include <stdio.h>
#define PI 3.1416
int main (void)
{
  float radius, area, circumference;
  printf("This is a c program to determine the area and circumference of the circle.\n");
  printf("Enter radius of circle: ");
  scanf(" %f", &radius);
  area = PI * radius * radius;
  circumference = 2 * PI * radius;
  printf("Area of circle = %.2f\n", area);
  printf("Circumference of circle = %.2f\n", circumference);
}
