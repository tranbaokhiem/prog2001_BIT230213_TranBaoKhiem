#include <stdio.h>

int main() {
    int a;
    float b;

    printf("Nhap so nguyen: ");
    scanf("%d", &a);

    // Ép kiểu int -> float
    b = (float)a;
    printf("So thuc sau khi ep: %.2f\n", b);

    // Ép kiểu float -> int
    a = (int)b;
    printf("So nguyen sau khi ep nguoc lai: %d\n", a);

    return 0;
}