#include<stdio.h>
int myFunction(int x, int y, int z){
return x+y+z;
}
int main(){
int result=myFunction(3,6,9);
printf("Result is what it is : %d", result);
return 0;
}
