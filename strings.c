#include<stdio.h>
int main(){
char greetings[]="Hello World!\n";
printf("%s", greetings);


char greets[]="Hello World!";
printf("%c\n", greets[0]);
//Note that we have to use the %c format specifier to print a single character.


char greetin[]="Hello World!\n";
greetin[0]='M';
printf("%s", greetin);


char greet[]={'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
printf("%s", greetings);
/*Why do we include the \0 character at the end? This is known as the "null terminating character",
and must be included when creating strings using this method.
It tells C that this is the end of the string.*/
return 0;
}
