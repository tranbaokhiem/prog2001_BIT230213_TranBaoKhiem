#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *f_in, *f_out;
    char ch;

    f_in = fopen("data.txt", "r");
    f_out = fopen("output.txt", "w");

    if (f_in == NULL || f_out == NULL) {
        printf("Loi mo file!\n");
        return 1;
    }

    while ((ch = fgetc(f_in)) != EOF) {
        ch = toupper(ch); // chuyển sang chữ hoa nếu là chữ thường
        fputc(ch, f_out);
    }

    printf("Da sao chep va chuyen doi xong!\n");

    fclose(f_in);
    fclose(f_out);

    return 0;
}