//
//  main.c
//  bt7
//
//  Created by Cao Chanh Dat on 18/11/2023.
//

#include <stdio.h>
#include <math.h>

// Hàm tính tổng S = 1 + 2^n + 3^n + ... + n^n
double tinhTong(int n) {
    double tong = 0.0;
    for (int i = 1; i <= n; i++) {
        tong += pow(i, n);
    }
    return tong;
}

// Hàm chính
int main() {
    int n;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Vui long nhap so nguyen khong am.\n");
        return 1;
    }

    double ketQua = tinhTong(n);
    printf("Tong S = 1 + 2^n + 3^n + ... + %d^%d la: %.6f\n", n, n, ketQua);

    return 0;
}

