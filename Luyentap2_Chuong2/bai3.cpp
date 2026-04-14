#include <stdio.h>

int main() {
    int a, b;

    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);

    printf("Cong: %d\n", a + b);
    printf("Tru: %d\n", a - b);
    printf("Nhan: %d\n", a * b);

    if (b != 0) {
        printf("Chia: %.2f\n", (float)a / b);
        printf("Chia du: %d\n", a % b);
    } else {
        printf("Khong the chia cho 0\n");
    }

    return 0;
}