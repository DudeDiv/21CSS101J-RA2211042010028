#include <stdio.h>
//function to calculate square of a number
int calcSquare(int n);
int main() {
printf("RA2211042010028");
int n;
printf("enter n : ");
scanf("%d", &n);
printf("square is : %d", calcSquare(n));
return 0;
}
int calcSquare(int n) {
return n * n;
}
