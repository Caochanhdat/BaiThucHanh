//
//  main.c
//  bt3
//
//  Created by Cao Chanh Dat on 18/11/2023.
//

#include <stdio.h>

// Hàm tính tổng S = 1 + 1/2 + ... + 1/n
float tinhTong(int n) {
    float tong = 0.0;
    for (int i = 1; i <= n; i++) {
        tong += 1.0 / i;
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
    printf("Tong S = 1 + 1/2 + ... + 1/%d la: %.6f\n", n, ketQua);

    return 0;
}
