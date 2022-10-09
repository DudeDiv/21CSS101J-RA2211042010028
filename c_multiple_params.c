#include<stdio.h>
void MYF(char names[], int age){
printf("Hello %s. You are %d years old and rusting :p\n", names, age);
}
int main(){
    MYF("Divyanshu", 19);
    MYF("Cevin R Christo", 18);
    MYF("Alok Zamn", 17);
/*when working with multiple parameters, the function call must have
the same number of arguments as there are parameters, and the arguments
must be passed in the same order.*/
return 0;
}
