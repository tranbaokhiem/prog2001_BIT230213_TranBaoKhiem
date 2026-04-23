#include <stdio.h>

int main() {
    FILE *f1, *f2, *f_out;
    char ch;

    f1 = fopen("data.txt", "r");
    f2 = fopen("test.txt", "r");
    f_out = fopen("merged.txt", "w");

    if (f1 == NULL || f2 == NULL || f_out == NULL) {
        printf("Loi mo file!\n");
        return 1;
    }

    // Copy file1
    while ((ch = fgetc(f1)) != EOF) {
        fputc(ch, f_out);
    }

    // Copy file2
    while ((ch = fgetc(f2)) != EOF) {
        fputc(ch, f_out);
    }

    printf("Da ghep file xong!\n");

    fclose(f1);
    fclose(f2);
    fclose(f_out);

    return 0;
}