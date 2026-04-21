#include <stdio.h>

// Khai báo struct
struct Student {
    char mssv[20];
    char ten[50];
};

int main() {
    // Khởi tạo biến
    struct Student sv = {"B12345", "Nguyen Van A"};

    // In thông tin
    printf("MSSV: %s\n", sv.mssv);
    printf("Ten: %s\n", sv.ten);

    return 0;
}