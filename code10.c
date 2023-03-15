//THIS QUESTION CAME FOR CT-1!
#include <stdio.h>
int main(){
  int salary;
  float tax_amount;
  printf("Enter the salary amount:\n");
  scanf("%d", &salary);
  if ((salary > 0) && (salary <= 180000)){
    tax_amount = 0.08*salary;
    printf("Tax amount to be paid:\n", tax_amount);
  } else if ((salary > 180000) && (salary <= 500000)){
    tax_amount = 0.16*salary;
    printf("Tax amount to be paid:\n", tax_amount);
  } else
    tax_amount = 0.33*salary;
    printf("Tax amount to be paid:\n", tax_amount);
return 0;
}
