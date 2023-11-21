//
//  main.c
//  bt2
//
//  Created by Cao Chanh Dat on 18/11/2023.
//

#include <stdio.h>

// Hàm tính giai thừa của n
long tinhGiaiThua(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * tinhGiaiThua(n - 1);
    }
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

    long ketQua = tinhGiaiThua(n);
    printf("Giai thua cua %d la: %ld\n", n, ketQua);

    return 0;
}
