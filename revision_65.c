#include <stdio.h>

int main()
{
    printf("RA2211042010028\n");
    int a[10];
    for(int i=0;i<10;i++){
    scanf("%d",&a[i]);
    }
    int n,p=-1;
    printf("Enter search number");
    scanf("%d",&n);
    for(int i=0;i<10;i++){
        if(a[i]==n)
        p=i;
    }
    printf("%d",p);
}
