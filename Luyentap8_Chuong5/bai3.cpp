#include <stdio.h>

// Struct Owner
struct Owner {
    char ten[50];
    int tuoi;
};

// Struct Car chứa Owner
struct Car {
    char model[50];
    int nam;
    struct Owner owner;
};

int main() {
    // Khởi tạo biến
    struct Car car1 = {
        "Toyota Camry",
        2020,
        {"Nguyen Van A", 30}
    };

    // In thông tin
    printf("Model: %s\n", car1.model);
    printf("Nam: %d\n", car1.nam);
    printf("Chu xe: %s\n", car1.owner.ten);
    printf("Tuoi chu xe: %d\n", car1.owner.tuoi);

    return 0;
}