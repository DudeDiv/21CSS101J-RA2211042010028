#include<stdio.h>
//USING CONTINUE
int main(){
    printf("RA2211042010028\n");
for(int i=1; i<=5; i++){
    if(i==3){ //skip
        continue;
    }
printf("%d\n", i);
}
}
