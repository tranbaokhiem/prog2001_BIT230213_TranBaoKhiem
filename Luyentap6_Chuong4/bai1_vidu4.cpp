#include <stdio.h>

static void hello() {
    printf("Hello from static function\n");
}

int main() {
    hello(); // OK
    return 0;
}