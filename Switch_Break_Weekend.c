#include<stdio.h>
//Weekend Day Selector
int main(){
    int day;
    printf("What's the day number of weekend? Type here :\n", day);
    scanf("%d", &day);
        switch(day){
            case 1:
                printf("Monday");
                break;
            case 2:
                printf("Tuesday");
                break;
            case 3:
                printf("Wednesday");
                break;
            case 4:
                printf("Thursday");
                break;
            case 5:
                printf("Friday");
                break;
            case 6:
                printf("Saturday");
                break;
            case 7:
                printf("Sunday");
                break;
            default:
                printf("Not in this A.D Dude");
                   }
return 0;
}
