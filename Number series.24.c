#include <stdio.h>
int main () {
  int temp;
scanf("%d", &temp);

if(temp > 30)
  printf("Hot");
else if(temp >= 20)
  printf("Medium");
else
  printf("Cold");
return 0;
}
