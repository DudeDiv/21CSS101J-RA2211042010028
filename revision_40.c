#include <stdio.h>
void main()
{
    printf("RA221142010028\n");
    int a;
    printf("enter a number : ");
    scanf("%d",&a);
    int r=a%10;
    while(a>0)
    {
        int d=a%10;
        if(r<d)
        r=d;
        a/=10;
    }
    printf("Largest Digit = %d",r);
}
