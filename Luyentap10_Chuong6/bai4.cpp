#include <stdio.h>

int main() {
    FILE *f;
    int number = 12345;
    int readNumber;

    // Mở file
    f = fopen("data.dat", "wb+");
    if (f == NULL) {
        printf("Khong mo duoc file!\n");
        return 1;
    }

    // Di chuyển đến vị trí byte 20
    fseek(f, 20, SEEK_SET);

    // Ghi số vào đó
    fwrite(&number, sizeof(int), 1, f);

    // Đọc lại
    fseek(f, 20, SEEK_SET);
    fread(&readNumber, sizeof(int), 1, f);

    // In kết quả
    printf("Gia tri doc duoc: %d\n", readNumber);

    // Kiểm tra
    if (number == readNumber) {
        printf("Du lieu dung!\n");
    } else {
        printf("Du lieu sai!\n");
    }

    // In vị trí con trỏ
    long pos = ftell(f);
    printf("Vi tri con tro sau khi doc: %ld\n", pos);

    fclose(f);
    return 0;
}