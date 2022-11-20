//printing table
#include<stdio.h>
void printTable(int number);

int main(){
printf("RA2211042010028\n");
int n;
printf("Enter the natural number whose table you want :\n");
scanf("%d", &n);
printTable(n);
return 0;
}

void printTable(int number) {
    for(int i=1; i<=10; i++) {
        printf("%d\n", i*number);
    }
}
