//Area of square, circle and rectangle.
#include<stdio.h>

float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a, float b);

int main(){
printf("RA2211042010028\n");
float side, radius, a, b;

printf("Enter the side of square : \n");
scanf("%f", &side);
printf("Area of square is : %f\n\n", squareArea(side));

printf("Enter the radius of circle : \n");
scanf("%f", &radius);
printf("Area of circle is : %f\n\n", circleArea(radius));

printf("Enter side 'a' (or length) of rectangle : \n");
scanf("%f", &a);
printf("Enter side 'b' (or breadth/width) of rectangle : \n");
scanf("%f", &b);
printf("Area of rectangle is : %f\n\n", rectangleArea(a,b));
}

float squareArea(float side){
return side*side;
}
float circleArea(float rad){
return 3.14*rad*rad;
}
float rectangleArea(float a, float b){
return a*b;
}
