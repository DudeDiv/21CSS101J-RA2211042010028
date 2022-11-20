#include <stdio.h>
int flood(int a)
{
    if(a==0)
    return 0;
    return 2;
}
void main()
{
    printf("Registration number : RA2211042010028");
    int a[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        scanf("%d",&a[i][j]);
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[i][j]!=0)
            {

                if(j>0)
                {
                a[i][j-1]=flood(a[i][j-1]);
                }
                a[i][j+1]=flood(a[i][j+1]);
                if(i>0)
                {
                a[i-1][j]=flood(a[i-1][j]);
                }
                a[i+1][j]=flood(a[i+1][j]);
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
