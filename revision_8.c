#include<stdio.h>
#include<math.h>
int main() {
printf("Registration number : RA2211042010028\n");
char day;
printf("Enter day type (m,t,w,T,f,s,S): \n");
scanf("%c", &day);
switch(day) {
case 'm' : printf("monday \n");
break;

case 't' : printf("tuesday \n");
break;
case 'w' : printf("wednesday \n");
break;
case 'T' : printf("thursday \n");
break;
case 'f' : printf("friday \n");
break;
case 's' : printf("saturday \n");
break;
case 'S' : printf("sunday \n");
break;

}
return 0;
}
