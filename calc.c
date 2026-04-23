#include <stdio.h>

int main() {
  int op;
  float a, b;

  printf("1.Add  2.Subtract  3.Multiply  4.Divide\nChoice: ");
  scanf("%d", &op);

  printf("Enter two numbers: ");
  scanf("%f %f", &a, &b);

  switch (op) {
  case 1:
    printf("Result: %.2f\n", a + b);
    break;
  case 2:
    printf("Result: %.2f\n", a - b);
    break;
  case 3:
    printf("Result: %.2f\n", a * b);
    break;
  case 4:
    (b != 0) ? printf("Result: %.2f\n", a / b)
             : printf("Error: Div by zero.\n");
    break;
  default:
    printf("Invalid choice.\n");
  }
  return 0;
}