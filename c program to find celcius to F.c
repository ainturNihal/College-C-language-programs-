#include <stdio.h>
int main (void)
{
  float fahrenheit, celcius;
  printf("Enter the temperature in Fahrenheit: ");
  scanf("%f", &fahrenheit);
  celcius = (fahrenheit - 32 /9);
  printf("Temprature in celcius = %.2f C", celcius);
}