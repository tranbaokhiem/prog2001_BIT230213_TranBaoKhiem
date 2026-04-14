#include <stdio.h>

int main() {
    int a, b, c, max;
    printf("Nhap 3 so a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        max = a;
    } else if (b >= a && b >= c) {
        max = b;
    } else {
        max = c;
    }
    printf("Gia tri lon nhat la: %d\n", max);
}