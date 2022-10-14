#include<stdio.h>
int main(){
    printf("Registration number : RA2211042010028\n");
int i=0;
while(i<5) {
printf("%d\n", i);
i++;} //Do not forget to increase the variable used in the condition (i++), otherwise the loop will never end!


int trap = 0;
printf("Type any one of the first ten natural numbers :");
scanf("%d", &trap);
do {
    printf("%d\n", trap);
    trap++;
}
while (trap<10);
return 0;
}
