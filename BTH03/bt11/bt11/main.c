//
//  main.c
//  bt11
//
//  Created by Cao Chanh Dat on 18/11/2023.
//

#include <stdio.h>
#include <stdbool.h>

// Hàm kiểm tra số nguyên tố
bool laSoNguyenTo(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// Hàm chính
int main() {
    int N;
    printf("Nhap so nguyen N: ");
    scanf("%d", &N);

    if (laSoNguyenTo(N)) {
        printf("%d la so nguyen to.\n", N);
    } else {
        printf("%d khong la so nguyen to.\n", N);
    }

    return 0;
}
