#include<stdio.h>
int main(){
  printf("Registration number : RA2211042010028\n");
int myAge=20;
printf("%d\n", myAge);
printf("%p\n", &myAge);


int yourAge=22;
int* ptr=&yourAge;
printf("%d\n", yourAge);
printf("%p\n", &yourAge);
printf("%p\n", ptr);


int ourAge=25;
int* ptrr=&ourAge;
printf("%p\n", ptrr);
printf("%d\n", *ptrr);
/*Note that the * sign can be confusing here, as it does two different things in our code:
When used in declaration (int* ptr), it creates a pointer variable.
When not used in declaration, it act as a dereference operator.
int* myNum; // Most used
int *myNum;
int * myNum;*/
return 0;
}
