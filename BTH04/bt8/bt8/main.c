//
//  main.c
//  bt8
//
//  Created by Cao Chanh Dat on 18/11/2023.
//

#include <stdio.h>

// Hàm tính lũy thừa của một số nguyên
double tinhLuyThua(int coSo, int soMu) {
    double ketQua = 1.0;
    for (int i = 0; i < soMu; i++) {
        ketQua *= coSo;
    }
    return ketQua;
}

// Hàm tính tổng 1 + 1/x + 1/x^2 + ... + 1/x^n
double tinhTong(int x, int n) {
    double tong = 0.0;

    for (int i = 0; i <= n; i++) {
        tong += 1.0 / tinhLuyThua(x, i);
    }
    
    return tong;
}

// Hàm chính
int main() {
    int x, n;
    printf("Nhap so nguyen x: ");
    scanf("%d", &x);
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Vui long nhap so nguyen khong am cho n.\n");
        return 1;
    }

    double ketQua = tinhTong(x, n);
    printf("Tong 1 + 1/%d + 1/%d^2 + ... + 1/%d^%d la: %.6f\n", x, x, x, n, ketQua);

    return 0;
}
