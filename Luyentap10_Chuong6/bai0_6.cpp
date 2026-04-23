#include <stdio.h>

int main() {
    FILE *f;
    char name[50];
    int age;
    float score;

    f = fopen("data.txt", "r");

    if (f == NULL) {
        printf("Khong mo duoc file!\n");
        return 1;
    }

    while (fscanf(f, "%s %d %f", name, &age, &score) != EOF) {
        printf("Ten: %s | Tuoi: %d | Diem: %.2f\n", name, age, score);
    }

    fclose(f);
    return 0;
}