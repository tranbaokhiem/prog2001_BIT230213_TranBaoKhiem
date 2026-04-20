#include <stdio.h>

int factorial(int n) {
    if (n == 0)   // base case
        return 1;
    else
        return n * factorial(n - 1); // recursive call
}

int main() {
    printf("5! = %d", factorial(5));
    return 0;
}