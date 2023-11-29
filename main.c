
#include<stdio.h>
#include<math.h>
int main ()
{
  float side1,side2,side3,perimeter,area,s;
  printf("Enter the length of all three sides of the triangle: ");
  scanf("%f%f%f",&side1,&side2,&side3);
  perimeter = side1 +side2 + side3;
  s = perimeter/2;
  area = sqrt (s*(s-side1)*(s-side2)*(s-side3));
  if (side1+side2>side3 && side2+side3>side1 && side3+side1>side2)
  {
    printf("The area of the triangle is %f\n",area);
    printf("The perimeter of the triangle is %f\n",perimeter);
  }
  else
  {
    printf("These entered side length do not form a valid triangle!");
  }
}