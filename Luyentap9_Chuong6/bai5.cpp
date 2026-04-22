#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *f_in, *f_out;
    char ch;
    int count_digit = 0;

    f_in = fopen("data.txt", "r");
    if (f_in == NULL) {
        printf("Khong mo duoc file input!\n");
        return 1;
    }

    while ((ch = fgetc(f_in)) != EOF) {
        if (isdigit(ch)) { // kiểm tra chữ số
            count_digit++;
        }
    }

    fclose(f_in);

    f_out = fopen("output_digit.txt", "w");
    if (f_out == NULL) {
        printf("Khong mo duoc file output!\n");
        return 1;
    }

    fprintf(f_out, "So ky tu chu so: %d\n", count_digit);

    printf("Da ghi ket qua vao output_digit.txt\n");

    fclose(f_out);
    return 0;
}