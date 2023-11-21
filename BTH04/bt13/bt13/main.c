//
//  main.c
//  bt13
//
//  Created by Cao Chanh Dat on 18/11/2023.
//

#include <stdio.h>
#include <math.h>

// Hàm tính chu vi tam giác
float tinhChuVi(float a, float b, float c) {
    return a + b + c;
}

// Hàm tính diện tích tam giác
float tinhDienTich(float a, float b, float c) {
    float p = tinhChuVi(a, b, c) / 2; // Nửa chu vi
    return sqrt(p * (p - a) * (p - b) * (p - c)); // Sử dụng công thức Heron
}

// Hàm chính
int main() {
    float canh1, canh2, canh3;

    // Nhập độ dài các cạnh từ người dùng
    printf("Nhap do dai canh thu nhat: ");
    scanf("%f", &canh1);
    printf("Nhap do dai canh thu hai: ");
    scanf("%f", &canh2);
    printf("Nhap do dai canh thu ba: ");
    scanf("%f", &canh3);

    // Kiểm tra tính hợp lệ của tam giác
    if (canh1 + canh2 > canh3 && canh1 + canh3 > canh2 && canh2 + canh3 > canh1) {
        // Tính và hiển thị kết quả
        printf("Chu vi tam giac: %.2f\n", tinhChuVi(canh1, canh2, canh3));
        printf("Dien tich tam giac: %.2f\n", tinhDienTich(canh1, canh2, canh3));
    } else {
        printf("Khong phai tam giac hop le.\n");
    }

    return 0;
}
