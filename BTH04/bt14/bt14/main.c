//
//  main.c
//  bt14
//
//  Created by Cao Chanh Dat on 18/11/2023.
//

#include <stdio.h>

// Hàm tìm USCNL của hai số nguyên
int timUSCNL(int a, int b) {
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    return a;
}

// Hàm tìm BSCNN của hai số nguyên
int timBSCNN(int a, int b) {
    return (a * b) / timUSCNL(a, b);
}

// Hàm chính
int main() {
    int so1, so2;

    // Nhập hai số nguyên từ người dùng
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &so2);

    // Tính và hiển thị kết quả
    printf("USCNL cua %d va %d la: %d\n", so1, so2, timUSCNL(so1, so2));
    printf("BSCNN cua %d va %d la: %d\n", so1, so2, timBSCNN(so1, so2));

    return 0;
}
