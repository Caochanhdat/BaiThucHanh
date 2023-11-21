//
//  main.c
//  bt3
//
//  Created by Cao Chanh Dat on 18/11/2023.
//

#include <stdio.h>

// Định nghĩa kiểu dữ liệu số phức
typedef struct {
    double phanThuc; // phần thực
    double phanAo;   // phần ảo
} SoPhuc;

// Hàm nhập 1 số phức
SoPhuc nhapSoPhuc() {
    SoPhuc sp;
    printf("Nhap phan thuc: ");
    scanf("%lf", &sp.phanThuc);
    printf("Nhap phan ao: ");
    scanf("%lf", &sp.phanAo);
    return sp;
}

// Hàm tính tổng 2 số phức
SoPhuc tongHaiSoPhuc(SoPhuc sp1, SoPhuc sp2) {
    SoPhuc tong;
    tong.phanThuc = sp1.phanThuc + sp2.phanThuc;
    tong.phanAo = sp1.phanAo + sp2.phanAo;
    return tong;
}

// Hàm tính tích hai số phức
SoPhuc tichHaiSoPhuc(SoPhuc sp1, SoPhuc sp2) {
    SoPhuc tich;
    tich.phanThuc = sp1.phanThuc * sp2.phanThuc - sp1.phanAo * sp2.phanAo;
    tich.phanAo = sp1.phanThuc * sp2.phanAo + sp1.phanAo * sp2.phanThuc;
    return tich;
}

// Hàm chính
int main() {
    // a. Nhập 1 số phức
    printf("Nhap so phuc 1:\n");
    SoPhuc sp1 = nhapSoPhuc();

    printf("Nhap so phuc 2:\n");
    SoPhuc sp2 = nhapSoPhuc();

    // b. Tính tổng 2 số phức
    SoPhuc tong = tongHaiSoPhuc(sp1, sp2);
    printf("Tong hai so phuc: %.2lf + %.2lfi\n", tong.phanThuc, tong.phanAo);

    // c. Tính tích hai số phức
    SoPhuc tich = tichHaiSoPhuc(sp1, sp2);
    printf("Tich hai so phuc: %.2lf + %.2lfi\n", tich.phanThuc, tich.phanAo);

    return 0;
}
