#include <stdio.h>

void taomatran(int hang, int cot, int array[100][100]) {
    printf("Nhap cac gia tri trong ma tran:\n");
    for(int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("Nhap phan tu thu [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
}

void inmatran(int hang, int cot, int array[100][100]) {
    printf("Ma tran ban vua nhap la:\n");
    for(int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int hang, cot;
    
    printf("Nhap so hang: ");
    scanf("%d", &hang);
    printf("Nhap so cot: ");
    scanf("%d", &cot);
    
    int array[100][100];
    
    taomatran(hang, cot, array);
    inmatran(hang, cot, array);
    
    return 0;
}

