#include <stdio.h>

int sum_rev = 0;

void reverse(int n) {
    if (n) {
        sum_rev = sum_rev * 10 + n % 10;
        reverse(n / 10);
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    reverse(n);
    printf("Reversed number: %d\n", sum_rev);
    return 0;
}
