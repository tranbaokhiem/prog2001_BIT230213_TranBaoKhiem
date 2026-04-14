#include<stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 10 && num <= 50)
        printf("The number is between 10 and 50.\n");
    else
        printf("The number is not in the range.\n");
    return 0;
}