#include <stdio.h>

void nhapPhanTu(int arr[], int *n) {
    printf("Nhap so phan tu can nhap: ");
    scanf("%d", n);
    for (int i = 0; i < *n; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }
}

void inPhanTu(int arr[], int n) {
    printf("Cac phan tu trong mang: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void themPhanTu(int arr[], int *n, int viTri, int giaTri) {
    for (int i = *n; i > viTri; i--) {
        arr[i] = arr[i - 1];
    }
    arr[viTri] = giaTri;
    (*n)++;
}

void suaPhanTu(int arr[], int viTri, int giaTri) {
    arr[viTri] = giaTri;
}

void xoaPhanTu(int arr[], int *n, int viTri) {
    for (int i = viTri; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
}

void sapXepTangDan(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void sapXepGiamDan(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int timKiemTuyenTinh(int arr[], int n, int giaTri) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == giaTri) {
            return i;
        }
    }
    return -1;
}

int timKiemNhiPhan(int arr[], int n, int giaTri) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == giaTri) {
            return mid;
        } else if (arr[mid] < giaTri) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[100];
    int n = 0;
    int choice;

    do {
        printf("\nMENU\n");
        printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. Them mot phan tu vao vi tri chi dinh\n");
        printf("4. Sua mot phan tu o vi tri chi dinh\n");
        printf("5. Xoa mot phan tu o vi tri chi dinh\n");
        printf("6. Sap xep cac phan tu\n");
        printf("   a. Giam dan\n");
        printf("   b. Tang dan\n");
        printf("7. Tim kiem phan tu nhap vao\n");
        printf("   a. Tim kiem tuyen tinh\n");
        printf("   b. Tim kiem nhi phan\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        int viTri, giaTri, kq;
        char subChoice;
        switch (choice) {
            case 1:
                nhapPhanTu(arr, &n);
                break;
            case 2:
                inPhanTu(arr, n);
                break;
            case 3:
                printf("Nhap vi tri can them: ");
                scanf("%d", &viTri);
                printf("Nhap gia tri can them: ");
                scanf("%d", &giaTri);
                themPhanTu(arr, &n, viTri, giaTri);
                break;
            case 4:
                printf("Nhap vi tri can sua: ");
                scanf("%d", &viTri);
                printf("Nhap gia tri moi: ");
                scanf("%d", &giaTri);
                suaPhanTu(arr, viTri, giaTri);
                break;
            case 5:
                printf("Nhap vi tri can xoa: ");
                scanf("%d", &viTri);
                xoaPhanTu(arr, &n, viTri);
                break;
            case 6:
                printf("Ban muon sap xep tang dan (a) hay giam dan (b)? ");
                scanf(" %c", &subChoice);
                if (subChoice == 'a') {
                    sapXepTangDan(arr, n);
                } else if (subChoice == 'b') {
                    sapXepGiamDan(arr, n);
                } else {
                    printf("Lua chon khong hop le.\n");
                }
                break;
            case 7:
                printf("Nhap gia tri can tim: ");
                scanf("%d", &giaTri);
                printf("Ban muon tim kiem tuyen tinh (a) hay nhi phan (b)? ");
                scanf(" %c", &subChoice);
                if (subChoice == 'a') {
                    kq = timKiemTuyenTinh(arr, n, giaTri);
                } else if (subChoice == 'b') {
                    sapXepTangDan(arr, n); 
                    kq = timKiemNhiPhan(arr, n, giaTri);
                } else {
                    printf("Lua chon khong hop le.\n");
                    break;
                }
                if (kq != -1) {
                    printf("Tim thay gia tri tai vi tri: %d\n", kq);
                } else {
                    printf("Khong tim thay gia tri.\n");
                }
                break;
            case 8:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 8);

    return 0;
}

