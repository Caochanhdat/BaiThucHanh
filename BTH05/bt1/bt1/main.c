//
//  main.c
//  bt1
//
//  Created by Cao Chanh Dat on 18/11/2023.
//

#include <stdio.h>

#define MAX 100

// Hàm nhập mảng
void nhapMang(int mang[], int n) {
    printf("Nhap mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }
}

// Hàm tính tổng các phần tử có giá trị chẵn
int tongChan(int mang[], int n) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        if (mang[i] % 2 == 0) {
            tong += mang[i];
        }
    }
    return tong;
}

// Hàm chính
int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX) {
        printf("So phan tu khong hop le.\n");
        return 1;
    }

    int mang[MAX];

    // Nhập mảng
    nhapMang(mang, n);

    // Tính tổng các phần tử có giá trị chẵn
    int tong = tongChan(mang, n);
    printf("Tong cac phan tu co gia tri chan: %d\n", tong);

    return 0;
}
