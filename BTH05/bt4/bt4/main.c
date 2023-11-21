//
//  main.c
//  bt4
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

// b. Hàm tổng 2 mảng có cùng n phần tử
void tongHaiMang(int mang1[], int mang2[], int n) {
    printf("Tong cua hai mang la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", mang1[i] + mang2[i]);
    }
    printf("\n");
}

// c. Hàm giao của hai tập hợp
void giaoHaiTapHop(int mang1[], int mang2[], int n) {
    printf("Giao cua hai tap hop la: ");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mang1[i] == mang2[j]) {
                printf("%d ", mang1[i]);
                break;
            }
        }
    }
    printf("\n");
}

// d. Hàm hợp của hai tập hợp
void hopHaiTapHop(int mang1[], int mang2[], int n) {
    printf("Hop cua hai tap hop la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", mang1[i]);
    }
    for (int i = 0; i < n; i++) {
        int co_trong_hop = 0;
        for (int j = 0; j < n; j++) {
            if (mang2[i] == mang1[j]) {
                co_trong_hop = 1;
                break;
            }
        }
        if (!co_trong_hop) {
            printf("%d ", mang2[i]);
        }
    }
    printf("\n");
}

// Hàm chính
int main(void) {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int mang1[n], mang2[n];

    // a. Nhập mảng
    nhapMang(mang1, n);
    nhapMang(mang2, n);

    // b. Tính tổng 2 mảng
    tongHaiMang(mang1, mang2, n);

    // c. Tính giao của hai tập hợp
    giaoHaiTapHop(mang1, mang2, n);

    // d. Tính hợp của hai tập hợp
    hopHaiTapHop(mang1, mang2, n);

    return 0;
}
