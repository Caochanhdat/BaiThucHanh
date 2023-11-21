//
//  main.c
//  bt5
//
//  Created by Cao Chanh Dat on 18/11/2023.
//

#include <stdio.h>

// Hàm tính giai thừa
long long tinhGiaiThua(int x) {
    if (x == 0 || x == 1) {
        return 1;
    } else {
        return x * tinhGiaiThua(x - 1);
    }
}

// Hàm tính tổng S = 1! + 2! + ... + n!
long long tinhTong(int n) {
    long long tong = 0;
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

    long long ketQua = tinhTong(n);
    printf("Tong S = 1! + 2! + ... + %d! la: %lld\n", n, ketQua);

    return 0;
}
