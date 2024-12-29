#include <stdio.h>
#include <stdbool.h>
#include <math.h> 

bool kiemtrasonguyento(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void nhapmang(int hang, int cot, int array[100][100]) {
    printf("Nhap cac gia tri trong mang:\n");
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("Nhap Phan Tu Thu [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
}

void inmang(int hang, int cot, int array[100][100]) {
    printf("Ma Tran La:\n");
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

void incacphantugoc(int hang, int cot, int array[100][100]) {
    printf("Cac Phan Tu O Goc la:\n");
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            if ((i == 0 && j == 0) || (i == 0 && j == cot - 1) || 
                (i == hang - 1 && j == 0) || (i == hang - 1 && j == cot - 1)) {
                printf("%d ", array[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

void inphantuduongbien(int hang, int cot, int array[100][100]) {
    printf("Cac Phan Tu O Duong Bien la:\n");
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            if (i == 0 || j == 0 || i == hang - 1 || j == cot - 1) {
                printf("%d ", array[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

void inphantuduongcheochinhphu(int hang, int cot, int array[100][100]) {
    printf("Cac Phan Tu O Duong Cheo Chinh Va Cheo Phu la:\n");
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            if (i == j || i + j == cot - 1) {
                printf("%d ", array[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

void inphantusonguyento(int hang, int cot, int array[100][100]) {
    printf("Cac Phan Tu La So Nguyen To la:\n");
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            if (kiemtrasonguyento(array[i][j])) {
                printf("%d ", array[i][j]);
            } else {
                printf("0 ");
            }
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
    int choice; 
    
    do { 
        printf("\nMENU\n"); 
        printf("1. Nhap gia tri cac phan tu cua mang\n"); 
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n"); 
        printf("3. In ra cac phan tu o goc theo ma tran\n"); 
        printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n"); 
        printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n"); 
        printf("6. In ra cac phan tu la so nguyen to theo ma tran\n"); 
        printf("7. Thoat\n"); 
        printf("Lua chon cua ban: "); 
        scanf("%d", &choice); 
        
        switch (choice) { 
            case 1: 
                nhapmang(hang, cot, array); 
                break; 
            case 2: 
                inmang(hang, cot, array); 
                break; 
            case 3: 
                incacphantugoc(hang, cot, array); 
                break; 
            case 4: 
                inphantuduongbien(hang, cot, array); 
                break; 
            case 5: 
                inphantuduongcheochinhphu(hang, cot, array); 
                break; 
            case 6: 
                inphantusonguyento(hang, cot, array); 
                break; 
            case 7: 
                printf("Thoat chuong trinh.\n"); 
                break; 
            default: 
                printf("Lua chon khong hop le. Vui long chon lai.\n"); 
        } 
    } while (choice != 7); 

    return 0; 
}

