#include<stdio.h>
int main()
{
  printf("Registration number : RA2211042010028\n");
int side1, side2, side3, largeside, sum;
printf ("Enter three sides of the triangle:\n");
scanf ("%d %d %d", &side1, &side2, &side3);
if (side1 > side2)
{
if (side1 > side3)
{
sum = side2 + side3; largeside = side1;
}
else
{
sum = side1 + side2; largeside = side3;
}
}
else
{
if (side2 > side3)
{
sum = side1 + side3; largeside = side2;
}
else
{
sum = side1 + side2; largeside = side3;
}
}
if (sum > largeside)
printf ("The triangle is a valid triangle\n");
else
printf ("The triangle is an invalid triangle\n");
return 0;
}
