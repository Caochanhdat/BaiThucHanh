//
//  main.c
//  bt2
//
//  Created by Cao Chanh Dat on 18/11/2023.
//

#include <stdio.h>

// Hàm tính tích P = 1 * 2 * ... * n
long long tinhTich(int n) {
    long long tich = 1;
    for (int i = 1; i <= n; i++) {
        tich *= i;
    }
    return tich;
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

    long long ketQua = tinhTich(n);
    printf("Tich P = 1 * 2 * ... * %d la: %lld\n", n, ketQua);

    return 0;
}
