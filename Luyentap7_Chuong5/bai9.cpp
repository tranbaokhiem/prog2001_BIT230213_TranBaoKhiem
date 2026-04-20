#include <stdio.h>

int main() {
    char str[100], ch;
    int count = 0;

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    printf("Nhap ky tu can tim: ");
    scanf("%c", &ch);

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch)
            count++;
    }

    printf("Ky tu '%c' xuat hien %d lan\n", ch, count);

    return 0;
}