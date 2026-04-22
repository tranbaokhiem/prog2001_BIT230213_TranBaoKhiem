#include <stdio.h>

int main() {
    FILE *f;
    char ch;

    f = fopen("data.txt", "r");

    if (f == NULL) {
        printf("Khong mo duoc file!\n");
        return 1;
    }

    printf("Noi dung file:\n");

    while ((ch = fgetc(f)) != EOF) {
        printf("%c", ch);
    }

    fclose(f);
    return 0;
}
