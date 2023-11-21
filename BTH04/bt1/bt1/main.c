//
//  main.c
//  bt1
//
//  Created by Cao Chanh Dat on 18/11/2023.
//

#include <stdio.h>

// Hàm tính tổng 1 + 2 + ... + n
int tinhTong(int n) {
    int tong = 0;
    for (int i = 1; i <= n; i++) {
        tong += i;
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

    int ketQua = tinhTong(n);
    printf("Tong 1 + 2 + ... + %d la: %d\n", n, ketQua);

    return 0;
}
