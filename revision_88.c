//Keep taking numbers as input from user until user enters an odd number
#include<stdio.h>
int main(){
    printf("RA2211042010028\n");
int n;
do {
        printf("Enter a natural number : \n");
    scanf("%d", &n);
    printf("%d\n", n);

    if(n%2 != 0 || n<=0){
        break;
    }
}while(1);
printf("You have either entered an odd number or an unspecified domain number.\n");
}
