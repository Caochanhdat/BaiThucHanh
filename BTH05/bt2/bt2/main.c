//
//  main.c
//  bt2
//
//  Created by Cao Chanh Dat on 18/11/2023.
//

#include <stdio.h>

#define MAX 100

// a. Hàm nhập mảng
void nhapMang(int mang[], int n) {
    printf("Nhap mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }
}

// b. Hàm xuất mảng
void xuatMang(int mang[], int n) {
    printf("Mang:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");
}

// c. Hàm tính tổng các phần tử có giá trị chẵn
int tongChan(int mang[], int n) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        if (mang[i] % 2 == 0) {
            tong += mang[i];
        }
    }
    return tong;
}

// d. Hàm đếm có bao nhiêu phần tử có giá trị lẻ trên mảng
int demLe(int mang[], int n) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (mang[i] % 2 != 0) {
            dem++;
        }
    }
    return dem;
}

// Hàm chính
int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int mang[MAX];

    // a. Nhập mảng
    nhapMang(mang, n);

    // b. Xuất mảng
    xuatMang(mang, n);

    // c. Tính tổng các phần tử có giá trị chẵn
    int tong = tongChan(mang, n);
    printf("Tong cac phan tu co gia tri chan: %d\n", tong);

    // d. Đếm có bao nhiêu phần tử có giá trị lẻ trên mảng
    int soLuongLe = demLe(mang, n);
    printf("So luong phan tu co gia tri le: %d\n", soLuongLe);

    return 0;
}
