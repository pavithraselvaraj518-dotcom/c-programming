#include <stdio.h>
int main() {
  int balance, amount;
scanf("%d %d", &balance, &amount);

if(amount <= balance)
  printf("Transaction Successful");
else
  printf("Insufficient Balance");
return 0;
}
