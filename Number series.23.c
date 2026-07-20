#include <stdio.h>
int main () {
  int year;
scanf("%d", &year);
if(year % 100 == 0)
  printf("Century Year");
else
  printf("Non Century Year");
return 0;
}
