#include <stdio.h>

// Hàm tính trung bình (truyền địa chỉ)
void trungBinh(int *a, int *b, int *c, float *tb) {
    *tb = (*a + *b + *c) / 3.0;
}

int main() {
    int a, b, c;
    float tb;

    printf("Nhap 3 so: ");
    scanf("%d %d %d", &a, &b, &c);

    trungBinh(&a, &b, &c, &tb);

    printf("Trung binh = %.2f\n", tb);

    return 0;
}
