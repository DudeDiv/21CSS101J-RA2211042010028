#include<stdio.h>
int main(){
printf("Registration number : RA2211042010028\n");
printf("[CT:1 (13-10-2022) SET:G]\n Question number : 9\n\n Find the correct output:\n");
int a=4, b=4, c=2;
a=b+c;
c=a-b;
c=c+a;
c=b+c;
b=b+c;
printf("a=%d, b=%d, c=%d", a, b, c);
return 0;
}
