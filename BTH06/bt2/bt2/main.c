//
//  main.c
//  bt2
//
//  Created by Cao Chanh Dat on 18/11/2023.
//

#include <stdio.h>

// Định nghĩa kiểu dữ liệu phân số
typedef struct {
    int tuSo;
    int mauSo;
} PhanSo;

// Hàm nhập n phân số
void nhapDanhSachPhanSo(PhanSo danhSach[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap phan so thu %d:\n", i + 1);
        printf("Tu so: ");
        scanf("%d", &danhSach[i].tuSo);
        do {
            printf("Mau so (khac 0): ");
            scanf("%d", &danhSach[i].mauSo);
        } while (danhSach[i].mauSo == 0);
    }
}

// Hàm tìm phân số lớn nhất trong n phân số
PhanSo timMax(PhanSo danhSach[], int n) {
    PhanSo max = danhSach[0];
    for (int i = 1; i < n; i++) {
        double giaTriHienTai = (double)danhSach[i].tuSo / danhSach[i].mauSo;
        double giaTriMax = (double)max.tuSo / max.mauSo;
        if (giaTriHienTai > giaTriMax) {
            max = danhSach[i];
        }
    }
    return max;
}

// Hàm tính tổng các phân số
PhanSo tinhTong(PhanSo danhSach[], int n) {
    PhanSo tong = {0, 1}; // Khởi tạo tổng bằng 0
    for (int i = 0; i < n; i++) {
        tong.tuSo = tong.tuSo * danhSach[i].mauSo + danhSach[i].tuSo * tong.mauSo;
        tong.mauSo *= danhSach[i].mauSo;
    }
    return tong;
}

// Hàm chính
int main() {
    int n;
    printf("Nhap so luong phan so: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So luong phan so khong hop le.\n");
        return 1;
    }

    PhanSo danhSach[n];

    // a. Nhập n phân số
    nhapDanhSachPhanSo(danhSach, n);

    // b. Tìm phân số lớn nhất trong n phân số
    PhanSo max = timMax(danhSach, n);
    printf("Phan so lon nhat: %d/%d\n", max.tuSo, max.mauSo);

    // c. Tính tổng các phân số
    PhanSo tong = tinhTong(danhSach, n);
    printf("Tong cac phan so: %d/%d\n", tong.tuSo, tong.mauSo);

    return 0;
}
