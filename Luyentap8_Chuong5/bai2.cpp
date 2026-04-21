#include <stdio.h>

struct Employee {
    int id;
    char ten[50];
    float luong;
};

int main() {
    // Tạo mảng Employee
    struct Employee ds[3] = {
        {1, "Nguyen Van A", 5000},
        {2, "Tran Thi B", 6000},
        {3, "Le Van C", 5500}
    };

    // In thông tin
    for (int i = 0; i < 3; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("ID: %d\n", ds[i].id);
        printf("Ten: %s\n", ds[i].ten);
        printf("Luong: %.2f\n", ds[i].luong);
    }

    return 0;
}