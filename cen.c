#include <stdio.h>

int main() {
  int year;

  printf("Enter a year: ");
  scanf("%d", &year);

  if (year % 400 == 0) {
    printf("%d is a century leap year.\n", year);
  } else if (year % 100 == 0) {
    printf("%d is a century year, but NOT a leap year.\n", year);
  } else if (year % 4 == 0) {
    printf("%d is a non-century leap year.\n", year);
  } else {
    printf("%d is NOT a leap year.\n", year);
  }

  return 0;
}