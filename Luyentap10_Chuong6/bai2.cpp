#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[5];

    FILE *f;

    // Ghi mảng vào file
    f = fopen("array.dat", "wb");
    if (f == NULL) {
        printf("Khong mo duoc file!\n");
        return 1;
    }

    fwrite(arr1, sizeof(int), 5, f);
    fclose(f);

    // Đọc mảng từ file
    f = fopen("array.dat", "rb");
    if (f == NULL) {
        printf("Khong mo duoc file!\n");
        return 1;
    }

    fread(arr2, sizeof(int), 5, f);
    fclose(f);

    // In ra để kiểm tra
    printf("Mang doc duoc:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    // So sánh
    int check = 1;
    for (int i = 0; i < 5; i++) {
        if (arr1[i] != arr2[i]) {
            check = 0;
            break;
        }
    }

    if (check) {
        printf("Du lieu dung!\n");
    } else {
        printf("Du lieu sai!\n");
    }

    return 0;
}