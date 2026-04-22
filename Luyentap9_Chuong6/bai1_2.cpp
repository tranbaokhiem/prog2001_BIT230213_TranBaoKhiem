#include <stdio.h>

int main() {
    FILE *f;

    f = fopen("C:\\Users\\admin\\CLionProjects\\test.txt", "w");

    if (f == NULL) {
        printf("Khong the tao file!\n");
        return 1;
    }

    printf("Da tao file trong o C!\n");

    fclose(f);
    return 0;
}