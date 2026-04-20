#include <stdio.h>

int main() {
    int m, n;
    printf("Nhap so dong va cot: ");
    scanf("%d %d", &m, &n);

    int A[m][n];

    printf("Nhap ma tran:\n");
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Ma tran chuyen vi:\n");
    for(int j = 0; j < n; j++) {
        for(int i = 0; i < m; i++)
            printf("%d ", A[i][j]);
        printf("\n");
    }

    return 0;
}