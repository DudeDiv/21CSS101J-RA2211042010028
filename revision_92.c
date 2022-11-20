//Print the factorial of n.
#include<stdio.h>
int main(){
printf("RA2211042010028\n");
int n;
printf("Enter number whose factorial you want :\n");
scanf("%d", &n);
int fact=1;
for(int i=1; i<=n; i++) {
fact = fact*i;
}
    printf("Final Factorial is : %d\n", fact);
}
