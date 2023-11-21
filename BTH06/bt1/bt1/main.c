//
//  main.c
//  bt1
//
//  Created by Cao Chanh Dat on 09/11/2023.
//

#include <stdio.h>
#include <stdlib.h>

// Định nghĩa kiểu dữ liệu phân số
typedef struct {
    int tuSo;
    int mauSo;
} PhanSo;

// Hàm nhập 1 phân số
PhanSo nhapPhanSo() {
    PhanSo ps;
    printf("Nhap tu so: ");
    scanf("%d", &ps.tuSo);
    do {
        printf("Nhap mau so (khac 0): ");
        scanf("%d", &ps.mauSo);
    } while (ps.mauSo == 0);
    return ps;
}

// Hàm xuất 1 phân số
void xuatPhanSo(PhanSo ps) {
    printf("%d/%d\n", ps.tuSo, ps.mauSo);
}

// Hàm tính tổng 2 phân số
PhanSo tongHaiPhanSo(PhanSo ps1, PhanSo ps2) {
    PhanSo tong;
    tong.tuSo = ps1.tuSo * ps2.mauSo + ps2.tuSo * ps1.mauSo;
    tong.mauSo = ps1.mauSo * ps2.mauSo;
    return tong;
}

// Hàm tính tích 2 phân số
PhanSo tichHaiPhanSo(PhanSo ps1, PhanSo ps2) {
    PhanSo tich;
    tich.tuSo = ps1.tuSo * ps2.tuSo;
    tich.mauSo = ps1.mauSo * ps2.mauSo;
    return tich;
}

// Hàm chính
int main() {
    // a. Nhập 1 phân số
    printf("Nhap phan so 1:\n");
    PhanSo ps1 = nhapPhanSo();

    printf("Nhap phan so 2:\n");
    PhanSo ps2 = nhapPhanSo();

    // b. Xuất 1 phân số
    printf("Phan so 1: ");
    xuatPhanSo(ps1);

    printf("Phan so 2: ");
    xuatPhanSo(ps2);

    // c. Tính tổng 2 phân số
    PhanSo tong = tongHaiPhanSo(ps1, ps2);
    printf("Tong hai phan so: ");
    xuatPhanSo(tong);

    // d. Tính tích 2 phân số
    PhanSo tich = tichHaiPhanSo(ps1, ps2);
    printf("Tich hai phan so: ");
    xuatPhanSo(tich);

    return 0;
}
