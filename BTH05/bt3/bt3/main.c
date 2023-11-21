//
//  main.c
//  bt3
//
//  Created by Cao Chanh Dat on 18/11/2023.
//

#include <stdio.h>

// a. Hàm nhập mảng
void nhapMang(int mang[], int n) {
    printf("Nhap mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }
}

// b. Hàm kiểm tra mảng có phải là mảng chứa các phần tử dương không?
int laMangDuong(int mang[], int n) {
    for (int i = 0; i < n; i++) {
        if (mang[i] <= 0) {
            return 0; // Mảng không chứa toàn phần tử dương
        }
    }
    return 1; // Mảng chứa toàn phần tử dương
}

// c. Hàm kiểm tra mảng có đối xứng không?
int laMangDoiXung(int mang[], int n) {
    for (int i = 0; i < n / 2; i++) {
        if (mang[i] != mang[n - i - 1]) {
            return 0; // Mảng không đối xứng
        }
    }
    return 1; // Mảng đối xứng
}

// d. Hàm kiểm tra mảng có tạo thành dãy tăng dần không?
int laDayTangDan(int mang[], int n) {
    for (int i = 1; i < n; i++) {
        if (mang[i] <= mang[i - 1]) {
            return 0; // Mảng không tăng dần
        }
    }
    return 1; // Mảng tăng dần
}

// Làm thêm:

// e. Hàm kiểm tra mảng có tạo thành cấp số cộng không?
int laCapSoCong(int mang[], int n) {
    if (n <= 2) {
        return 1; // Nếu có 1 hoặc 2 phần tử, coi như là cấp số cộng
    }
    int buoc = mang[1] - mang[0];
    for (int i = 2; i < n; i++) {
        if (mang[i] - mang[i - 1] != buoc) {
            return 0; // Mảng không tạo thành cấp số cộng
        }
    }
    return 1; // Mảng tạo thành cấp số cộng
}

// f. Hàm kiểm tra mảng có tạo thành mảng răng cưa không?
int laRangCua(int mang[], int n) {
    for (int i = 1; i < n; i++) {
        if (mang[i] == mang[i - 1]) {
            return 0; // Mảng không tạo thành mảng răng cưa
        }
    }
    return 1; // Mảng tạo thành mảng răng cưa
}

// g. Hàm kiểm tra có tồn tại phần tử chứa giá trị X trên mảng?
int tonTaiPhanTuX(int mang[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (mang[i] == x) {
            return 1; // Tồn tại phần tử chứa giá trị X trên mảng
        }
    }
    return 0; // Không tồn tại phần tử chứa giá trị X trên mảng
}

// Hàm chính
int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int mang[n];

    // a. Nhập mảng
    nhapMang(mang, n);

    // b. Kiểm tra mảng có phải là mảng chứa các phần tử dương không?
    if (laMangDuong(mang, n)) {
        printf("Mang chua toan cac phan tu duong.\n");
    } else {
        printf("Mang khong chua toan cac phan tu duong.\n");
    }

    // c. Kiểm tra mảng có đối xứng không?
    if (laMangDoiXung(mang, n)) {
        printf("Mang la mang doi xung.\n");
    } else {
        printf("Mang khong la mang doi xung.\n");
    }

    // d. Kiểm tra mảng có tạo thành dãy tăng dần không?
    if (laDayTangDan(mang, n)) {
        printf("Mang tao thanh day tang dan.\n");
    } else {
        printf("Mang khong tao thanh day tang dan.\n");
    }

    // Làm thêm:

    // e. Kiểm tra mảng có tạo thành cấp số cộng không?
    if (laCapSoCong(mang, n)) {
        printf("Mang tao thanh cap so cong.\n");
    } else {
        printf("Mang khong tao thanh cap so cong.\n");
    }

    // f. Kiểm tra mảng có tạo thành mảng răng cưa không?
    if (laRangCua(mang, n)) {
        printf("Mang tao thanh mang rang cua.\n");
    } else {
        printf("Mang khong tao thanh mang rang cua.\n");
    }

    // g. Kiểm tra có tồn tại phần tử chứa giá trị X trên mảng?
    int x;
    printf("Nhap gia tri X can kiem tra: ");
    scanf("%d", &x);

    if (tonTaiPhanTuX(mang, n, x)) {
        printf("Ton tai phan tu chua gia tri %d tren mang.\n", x);
    } else {
        printf("Khong ton tai phan tu chua gia tri %d tren mang.\n", x);
    }

    return 0;
}
