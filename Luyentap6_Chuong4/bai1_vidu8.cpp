#include <stdio.h>

void change(int *x) {
    *x = 100;
}

int main() {
    int a = 10;
    change(&a);
    printf("a = %d", a); // = 100
    return 0;
}