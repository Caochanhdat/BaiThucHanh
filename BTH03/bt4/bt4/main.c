//
//  main.c
//  bt4
//
//  Created by Cao Chanh Dat on 18/11/2023.
//

#include <stdio.h>

// Hàm tính tổng S = 1/2 + 2/3 + ... + (n-1)/n
float tinhTong(int n) {
    float tong = 0.0;
    for (int i = 1; i < n; i++) {
        tong += (float)i / (i + 1);
    }
    return tong;
}

// Hàm chính
int main() {
    int n;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Vui long nhap so nguyen duong.\n");
        return 1;
    }

    float ketQua = tinhTong(n);
    printf("Tong S = 1/2 + 2/3 + ... + (n-1)/n la: %.6f\n", ketQua);

    return 0;
}
