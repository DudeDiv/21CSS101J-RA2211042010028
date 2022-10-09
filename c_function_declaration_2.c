#include<stdio.h>
int myFunction(int, int);
int main(){
int result=myFunction(6,7);
printf("Result is : %d", result);
return 0;
}
int myFunction(int x, int y){
int result=x+y;
}
