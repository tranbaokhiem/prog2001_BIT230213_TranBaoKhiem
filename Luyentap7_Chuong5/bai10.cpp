//
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    printf("Chuoi dao nguoc: ");
    for(int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}