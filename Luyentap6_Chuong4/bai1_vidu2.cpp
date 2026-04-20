#include <stdio.h>

int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n = 10;
    printf("Gia tri Fibonacci thu %d la: %d\n", n, fib(n));
    return 0;
}