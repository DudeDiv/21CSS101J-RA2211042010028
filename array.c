#include<stdio.h>
int main(){
int MyNumbers[]={25, 50, 75, 100};
printf("%d\n", MyNumbers[0]);


int MyNumber[]={20, 45, 60, 90};
MyNumber[0]=30;
printf("%d\n", MyNumber[0]);


int MyNum[]={11, 22, 33, 44, 55};
int i;
for (i=0;i<4;i++){
    printf("%d\n", MyNum[i]);
}


int mynum[4];
mynum[0]=5;
mynum[1]=13;
mynum[2]=17;
mynum[3]=23;
printf("%d\n", mynum[0]);
return 0;
}
