#include<stdio.h>
int main(){
int myNum;
printf("Type a number :\n");
scanf("%d", &myNum);
printf("Your number is : %d\n", myNum);
/*The scanf() function takes two arguments:
the format specifier of the variable (%d in the example above)
and the reference operator (&myNum),
which stores the memory address of the variable.*/


char firstName[30];
printf("Enter your first name : \n");
scanf("%s", firstName);
printf("Hello %s.", firstName);
/*Note that you must specify the size of the string/array
(we used a very high number, 30, but atleast then we are certain
 it will store enough characters for the first name),
 and you don't have to specify the reference operator (&)
 when working with strings in scanf().*/
return 0;
}
