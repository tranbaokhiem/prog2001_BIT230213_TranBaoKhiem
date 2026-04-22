#include <stdio.h>

int main() {
    FILE *f;

    f = fopen("test.txt", "w"); // tạo file test.txt

    if (f == NULL) {
        printf("Khong the tao file!\n");
        return 1;
    }

    printf("Da tao file test.txt trong cung thu muc!\n");

    fclose(f);
    return 0;
}
