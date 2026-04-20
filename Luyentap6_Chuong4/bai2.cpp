#include <stdio.h>

// Hàm đệ quy tính tổng
int tong(int n) {
    if (n == 1) {
        return 1;  // điều kiện dừng
    }
    return n + tong(n - 1);  // gọi lại chính nó
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("n phai >= 1\n");
    } else {
        printf("Tong = %d\n", tong(n));
    }

    return 0;
}