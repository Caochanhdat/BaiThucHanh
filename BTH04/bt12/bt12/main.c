//
//  main.c
//  bt12
//
//  Created by Cao Chanh Dat on 18/11/2023.
//

#include <stdio.h>

// Hàm tính tổng
int tinhTong(int a, int b) {
    return a + b;
}

// Hàm tính hiệu
int tinhHieu(int a, int b) {
    return a - b;
}

// Hàm tính tích
int tinhTich(int a, int b) {
    return a * b;
}

// Hàm tính thương
float tinhThuong(int a, int b) {
    if (b != 0) {
        return (float)a / b;
    } else {
        printf("Khong the chia cho 0.\n");
        return 0; // Trả về 0 nếu có lỗi chia cho 0
    }
}

// Hàm chính
int main() {
    int num1, num2;
    printf("Nhap so nguyen a: ");
    scanf("%d", &num1);
    printf("Nhap so nguyen b: ");
    scanf("%d", &num2);

    // Tính và hiển thị kết quả
    printf("Tong: %d\n", tinhTong(num1, num2));
    printf("Hieu: %d\n", tinhHieu(num1, num2));
    printf("Tich: %d\n", tinhTich(num1, num2));
    printf("Thuong: %.2f\n", tinhThuong(num1, num2));

    return 0;
}
