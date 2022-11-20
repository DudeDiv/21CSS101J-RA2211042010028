//Keep taking numbers as input from user until user enters a number which is a multiple of 7
#include<stdio.h>
int main(){
    printf("RA2211042010028\n");
int n;
do {
    printf("Enter a natural number : \n");
    scanf("%d", &n);
    printf("%d\n", n);

    if(n%7 == 0){
        break;
    }
}while(1);
printf("This number is a multiple of 7.\n");
}
