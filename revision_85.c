//Sum of n natural numbers
#include<stdio.h>
int main(){
    printf("RA2211042010028\n");
int n, sum;
printf("Enter the value of n :\n");
scanf("%d", &n);
sum=0;
for (int i=1; i<=n; i++){
    sum=sum+i;
}
printf("%d\n\n", sum);

//printing in reverse
for (int i=n; i>=1; i--){
    printf("%d\n", i);
}
return 0;
}
