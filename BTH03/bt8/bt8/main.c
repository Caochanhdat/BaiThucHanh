//
//  main.c
//  bt8
//
//  Created by Cao Chanh Dat on 18/11/2023.
//

#include <stdio.h>
#include <math.h>

// Hàm tính tổng S = 1 + 1/x^1 + 1/x^2 + ... + 1/x^n
double tinhTong(int n, double x) {
    double tong = 0.0;
    for (int i = 0; i <= n; i++) {
        tong += 1.0 / pow(x, i);
    }
    return tong;
}

// Hàm chính
int main() {
    int n;
    double x;

    // Nhập số nguyên n và số thực x từ người dùng
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    printf("Nhap so thuc x: ");
    scanf("%lf", &x);

    if (n < 0) {
        printf("Vui long nhap so nguyen khong am.\n");
        return 1;
    }

    double ketQua = tinhTong(n, x);
    printf("Tong S = 1 + 1/x^1 + 1/x^2 + ... + 1/x^%d la: %.6f\n", n, ketQua);

    return 0;
}
