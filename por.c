# include<stdio.h>
    int main() {
       int a, b;
       printf("Side 'a' of rectangle is :");
       scanf("%d", &a);
       printf("Side 'b' of rectangle is :");
       scanf("%d", &b);

       int sum=2*(a+b);
       printf("Perimeter of rectangle is :%d", sum);
       return 0;
    }
