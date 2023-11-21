//
//  main.c
//  bt11
//
//  Created by Cao Chanh Dat on 18/11/2023.
//

#include <stdio.h>
#include <stdbool.h>

// Hàm kiểm tra số nguyên tố
bool laSoNguyenTo(int x) {
    if (x < 2) {
        return false;
    }
    
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return false; // Nếu có ước số khác 1 và chính nó, không phải số nguyên tố
        }
    }
    
    return true; // Nếu không có ước số nào, là số nguyên tố
}

// Hàm in ra các số nguyên tố nhỏ hơn n
void inSoNguyenToNhoHon(int n) {
    printf("Cac so nguyen to nho hon %d la: ", n);
    
    for (int i = 2; i < n; i++) {
        if (laSoNguyenTo(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");
}

// Hàm chính
int main() {
    int n;
    printf("Nhap mot so nguyen n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Khong co so nguyen to nao nho hon %d.\n", n);
        return 1;
    }

    inSoNguyenToNhoHon(n);

    return 0;
}
