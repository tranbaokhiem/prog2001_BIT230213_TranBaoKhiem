#include <stdio.h>

// Hàm cộng
int add(int a, int b) {
    return a + b;
}

// Hàm trừ
int sub(int a, int b) {
    return a - b;
}

// Hàm nhận callback
int calculate(int a, int b, int (*operation)(int, int)) {
    return operation(a, b); // gọi callback
}

int main() {
    int result1 = calculate(5, 3, add);
    int result2 = calculate(5, 3, sub);

    printf("Add: %d\n", result1);
    printf("Sub: %d\n", result2);

    return 0;
}