//
//  main.c
//  bt5
//
//  Created by Cao Chanh Dat on 18/11/2023.
//

#include <stdio.h>

// Hàm tính giai thừa của một số nguyên
unsigned long long tinhGiaiThua(int x) {
    if (x == 0 || x == 1) {
        return 1;
    } else {
        return x * tinhGiaiThua(x - 1);
    }
}

// Hàm tính tổng 1! + 2! + ... + n!
unsigned long long tinhTongGiaiThua(int n) {
    unsigned long long tong = 0;
    for (int i = 1; i <= n; i++) {
        tong += tinhGiaiThua(i);
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

    unsigned long long ketQua = tinhTongGiaiThua(n);
    printf("Tong 1! + 2! + ... + %d! la: %llu\n", n, ketQua);

    return 0;
}
