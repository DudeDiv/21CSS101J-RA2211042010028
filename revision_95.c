#include<stdio.h>

int sum(int a, int b);

int main(){
    printf("RA2211042010028\n");
int a,b;
printf("Enter the value of a :\n");
scanf("%d", &a);
printf("Enter the value of b :\n");
scanf("%d", &b);
int s = sum(a, b);
printf("Sum is : %d", s);
return 0;
}

int sum(int a, int b) {
    return a+b;
}
