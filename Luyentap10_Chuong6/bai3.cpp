#include <stdio.h>
#include <string.h>

struct Product {
    char name[50];
    float price;
};

int main() {
    struct Product p1[] = {
        {"Laptop", 1500.5},
        {"Mouse", 25.0},
        {"Keyboard", 75.5}
    };

    struct Product p2[3];

    FILE *f;

    // Ghi mảng vào file
    f = fopen("product.dat", "wb");
    if (f == NULL) {
        printf("Khong mo duoc file!\n");
        return 1;
    }

    fwrite(p1, sizeof(struct Product), 3, f);
    fclose(f);

    // Đọc lại
    f = fopen("product.dat", "rb");
    if (f == NULL) {
        printf("Khong mo duoc file!\n");
        return 1;
    }

    fread(p2, sizeof(struct Product), 3, f);
    fclose(f);

    // In ra kiểm tra
    printf("Du lieu doc duoc:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s - %.2f\n", p2[i].name, p2[i].price);
    }

    // So sánh
    int check = 1;
    for (int i = 0; i < 3; i++) {
        if (strcmp(p1[i].name, p2[i].name) != 0 || p1[i].price != p2[i].price) {
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