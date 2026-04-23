#include <stdio.h>

int main() {
  int choice;
  float balance = 5000.0, amount;

  printf("1.Balance  2.Deposit  3.Withdraw\nChoice: ");
  scanf("%d", &choice);

  switch (choice) {
  case 1:
    printf("Balance: %.2f\n", balance);
    break;
  case 2:
    printf("Amount to deposit: ");
    scanf("%f", &amount);
    printf("New Balance: %.2f\n", balance + amount);
    break;
  case 3:
    printf("Amount to withdraw: ");
    scanf("%f", &amount);
    // Using a ternary operator to keep it to one line
    (amount <= balance) ? printf("New Balance: %.2f\n", balance - amount)
                        : printf("Insufficient funds.\n");
    break;
  default:
    printf("Invalid choice.\n");
  }
  return 0;
}