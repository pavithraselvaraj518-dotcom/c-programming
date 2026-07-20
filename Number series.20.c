#include <stdio.h>
int main () {
  int n;
scanf("%d", &n);
if( n % 2 == 0 && n % 3 == 0 && n % 4 == 0)
  printf("Divisable");
else
  printf("Not Divisable");
return 0;
}
