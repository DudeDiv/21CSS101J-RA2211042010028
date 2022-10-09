#include<stdio.h>
int main(){
int a,b;
printf("Enter the two values\n");
scanf("%d%d", &a, &b);
printf("a>b is %d\n", (a>b));
printf("a<b is %d\n", (a<b));
printf("a>=b is %d\n", (a>=b));
printf("a<=b is %d\n", (a<=b));
// Relational Operators

int rt1=10;
int rt2=9;
int t=rt1!=rt2;
int y=70>500;
int ans=t||y;
printf("%d", ans);
//Logical Operators


return 0;
}
