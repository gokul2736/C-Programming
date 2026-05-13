# C-Programming
Assignment for attendance on 13.05.2026

## Name: Markandeyan Gokul
## Register Number: 212224240086

## Questions

## 1. Write a C program to find the factorial of a number using recursion.
### Program
```c
#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of %d is %d\n", n, factorial(n));
    return 0;
}
```
### Output
<img width="546" height="400" alt="Screenshot 2026-05-13 093719" src="https://github.com/user-attachments/assets/9b737d89-0a01-4137-b1d5-bfb552647393" />


## 2. Write a C program to print Fibonacci series using recursion.
### Program
```c
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}
```
### Output
<img width="538" height="343" alt="Screenshot 2026-05-13 094100" src="https://github.com/user-attachments/assets/90c67db3-3939-46ee-819c-15425d117d30" />


## 3. Write a C program to find the sum of natural numbers using recursion.
### Program
```c
#include <stdio.h>

int sum(int n) {
    if (n == 0) return 0;
    return n + sum(n - 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of natural numbers up to %d is %d\n", n, sum(n));
    return 0;
}
```
### Output
<img width="505" height="349" alt="Screenshot 2026-05-13 094328" src="https://github.com/user-attachments/assets/bd1927ef-d702-4c87-91c5-ea05b7ae216d" />


## 4. Write a C program to reverse a number using recursion.
### Program
```c
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
```
### Output
<img width="518" height="358" alt="Screenshot 2026-05-13 094256" src="https://github.com/user-attachments/assets/4054b1cd-b912-4067-84a3-58341a222802" />


## 5. Write a C program to find the power of a number using recursion.
### Program
```c
#include <stdio.h>

int power(int base, int exp) {
    if (exp == 0) return 1;
    return base * power(base, exp - 1);
}

int main() {
    int base, exp;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);
    printf("%d^%d = %d\n", base, exp, power(base, exp));
    return 0;
}
```
### Output
<img width="517" height="355" alt="image" src="https://github.com/user-attachments/assets/f79b9530-8516-436c-a979-4d799130d5df" />
