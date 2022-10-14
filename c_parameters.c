#include<stdio.h>
void myFunction(char name[]){
printf("Hello %s.\n", name);
}
int main(){
  printf("Registration number : RA2211042010028\n");
myFunction("Divyanshu");
myFunction("Cevin R Christo");
myFunction("Alok Zamn");
/*When a parameter is passed to the function, it is called an argument.
So, from the example above: 'name' is a parameter,
while Divyanshu, Cevin R Christo and Alok Zamn are arguments.*/
}
