#include<stdio.h>
int main(){
  printf("Registration number : RA2211042010028\n");
//Time taken to reach Delhi from Ranchi.
float speed, distance, time_taken;
printf("Enter the distance (in kms) between Ranchi and Delhi : ");
scanf("%f", &distance);
printf("What was your average speed (in kmph)for the whole trip? Type here : ");
scanf("%f", &speed);
printf("Time taken (in mins) to reach Delhi from Ranchi = %f", time_taken=(distance/speed)*60);
return 0;
}
