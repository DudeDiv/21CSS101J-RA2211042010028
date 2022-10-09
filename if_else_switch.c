#include<stdio.h>
int main(){
if (20>18){
printf("20 is obviously greater than 18\n");
}



int x=20;
int y=19;
if(x>y){
    printf("x is greater than y\n");
}



int time=20;
if (time<18){
    printf("Good Morning.\n");
}
else{
        printf("Good Evening.\n");
}



float timehrs;
printf("What's the time in hours? Type here : \n", timehrs);
scanf("%f", &timehrs);
if (timehrs < 12){
    printf("Good Morning\n");
} else if (timehrs < 24) {
printf("Good Evening\n");
}
else {
    printf("No data for this timing.");
}
return 0;
}
