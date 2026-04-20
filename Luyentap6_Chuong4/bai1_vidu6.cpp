#include <stdio.h>

// prototype
int max(int a, int b);

int main() {
    int m = max(10, 20);
    printf("Max = %d", m);
    return 0;
}

// definition
int max(int a, int b) {
    return (a > b) ? a : b;
}