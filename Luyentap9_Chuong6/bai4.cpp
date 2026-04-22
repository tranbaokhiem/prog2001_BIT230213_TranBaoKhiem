#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *f_in, *f_out;
    char ch;
    int count_letter = 0;

    f_in = fopen("data.txt", "r");
    if (f_in == NULL) {
        printf("Khong mo duoc file input!\n");
        return 1;
    }

    while ((ch = fgetc(f_in)) != EOF) {
        if (isalpha(ch)) { // kiểm tra chữ cái
            count_letter++;
        }
    }

    fclose(f_in);

    f_out = fopen("output_letter.txt", "w");
    if (f_out == NULL) {
        printf("Khong mo duoc file output!\n");
        return 1;
    }

    fprintf(f_out, "So ky tu chu cai: %d\n", count_letter);

    printf("Da ghi ket qua vao output_letter.txt\n");

    fclose(f_out);
    return 0;
}
