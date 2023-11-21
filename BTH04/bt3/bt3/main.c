//
//  main.c
//  bt3
//
//  Created by Cao Chanh Dat on 18/11/2023.
//

#include <stdio.h>

// Hàm tính tổng 1 + 1/2 + ... + 1/n
float tinhTong(float n) {
    float tong = 0.0;
    for (float i = 1.0; i <= n; i++) {
        tong += 1.0 / i;
    }
    return tong;
}

// Hàm chính
int main() {
    float n;
    printf("Nhap so thuc n: ");
    scanf("%f", &n);

    if (n <= 0) {
        printf("Vui long nhap so thuc lon hon 0.\n");
        return 1;
    }

    float ketQua = tinhTong(n);
    printf("Tong 1 + 1/2 + ... + 1/%.2f la: %.4f\n", n, ketQua);

    return 0;
}
