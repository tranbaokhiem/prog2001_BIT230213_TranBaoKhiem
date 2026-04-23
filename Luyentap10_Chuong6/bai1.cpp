#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
};

int main() {
    struct Student s1 = {"Nguyen Van A", 20};
    struct Student s2;

    FILE *f;

    // Ghi vào file
    f = fopen("student.dat", "wb");
    if (f == NULL) {
        printf("Khong mo duoc file!\n");
        return 1;
    }

    fwrite(&s1, sizeof(struct Student), 1, f);
    fclose(f);

    // Đọc từ file
    f = fopen("student.dat", "rb");
    if (f == NULL) {
        printf("Khong mo duoc file!\n");
        return 1;
    }

    fread(&s2, sizeof(struct Student), 1, f);
    fclose(f);

    // In ra để kiểm tra
    printf("Du lieu doc duoc:\n");
    printf("Name: %s\n", s2.name);
    printf("Age: %d\n", s2.age);

    // So sánh
    if (strcmp(s1.name, s2.name) == 0 && s1.age == s2.age) {
        printf("Du lieu dung!\n");
    } else {
        printf("Du lieu sai!\n");
    }

    return 0;
}