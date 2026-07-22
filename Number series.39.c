#include <stdio.h>
int main () {
  char a, b;
sacnf("%c %c", &a, &b);
if(a==b)
  printf("Same");
else
  printf("Different");
return 0;
}
