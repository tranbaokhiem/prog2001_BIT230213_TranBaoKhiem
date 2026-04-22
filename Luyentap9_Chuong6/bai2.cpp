#include <stdio.h>

int main() {
    FILE *f;
    char text[1000];

    f = fopen("data.txt", "w");

    if (f == NULL) {
        printf("Khong mo duoc file!\n");
        return 1;
    }

    printf("Nhap noi dung: ");
    fgets(text, sizeof(text), stdin);

    fprintf(f, "%s", text); // ghi vào file

    printf("Da ghi vao file!\n");

    fclose(f);
    return 0;
}
