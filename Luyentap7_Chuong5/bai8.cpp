#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    int length = strlen(str);

    printf("Chuoi vua nhap: %s", str);
    printf("Do dai chuoi: %d\n", length);

    return 0;
}
