#include <stdio.h>

// Hàm tính tổng
int tong(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    printf("Tong = %d\n", tong(n));

    return 0;
}