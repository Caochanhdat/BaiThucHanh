//
//  main.c
//  bt7
//
//  Created by Cao Chanh Dat on 18/11/2023.
//

#include <stdio.h>

// Hàm tính lũy thừa của một số nguyên
long long tinhLuyThua(int coSo, int soMu) {
    long long ketQua = 1;
    for (int i = 0; i < soMu; i++) {
        ketQua *= coSo;
    }
    return ketQua;
}

// Hàm tính tổng 1 + 2^n + 3^n + ... + n^n
long long tinhTong(int n) {
    long long tong = 0;

    for (int i = 1; i <= n; i++) {
        tong += tinhLuyThua(i, n);
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

    long long ketQua = tinhTong(n);
    printf("Tong 1 + 2^n + 3^n + ... + %d^%d la: %lld\n", n, n, ketQua);

    return 0;
}
