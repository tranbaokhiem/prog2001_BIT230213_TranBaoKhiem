#include <stdio.h>

int timKiem(int a[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            return i; // trả về index
        }
    }
    return -1; // không tìm thấy
}

int main() {
    int n, a[100], x;

    printf("Nhap n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);

    int kq = timKiem(a, n, x);

    if (kq == -1)
        printf("Khong tim thay");
    else
        printf("Tim thay tai vi tri: %d", kq);

    return 0;
}