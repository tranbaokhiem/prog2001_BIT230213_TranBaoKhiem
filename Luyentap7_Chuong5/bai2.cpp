#include <stdio.h>

int timMax(int a[], int n) {
    int max = a[0];
    int index = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
            index = i;
        }
    }

    printf("Gia tri lon nhat: %d\n", max);
    return index;
}

int main() {
    int n, a[100];

    printf("Nhap n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int idx = timMax(a, n);
    printf("Vi tri: %d", idx);

    return 0;
}