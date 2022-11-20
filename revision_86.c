//Merging the loops (revision_85)
//Sum of n natural numbers
#include<stdio.h>
int main(){
    printf("RA2211042010028\n");
int n;
printf("Enter the value of n :\n");
scanf("%d", &n);
int sum=0;
for (int i=1, j=n; i<=n && j>=1; i++, j--){
    sum=sum+i;
    printf("%d\n", j);
}
printf("sum is : %d\n", sum);

/*printing in reverse
for (int i=n; i>=1; i--){
    printf("%d\n", i);
}*/
return 0;
}
