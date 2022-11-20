//print the table of a number
#include<stdio.h>
int main(){
printf("RA2211042010028\n");
int n;
printf("Enter the number whose table is to be made : \n");
scanf("%d", &n);
for(int i=1; i<=10; i++) {
    printf("%d\n", n*i);
}
}
