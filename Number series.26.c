#include <stdio.h>
int main () {
  int n;
scanf("%d", &n);
if(n>=0 && n<=9)
  printf("Single Digit");
else if(n>=00 && n<=99)
  printf("Double Digit");
else
  printf("More Than Digits");
return 0;
}
