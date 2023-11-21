//
//  main.c
//  bt5
//
//  Created by Cao Chanh Dat on 18/11/2023.
//

#include <stdio.h>

#define MAX 100

// Hàm nhập ma trận
void nhapMaTran(int matran[MAX][MAX], int hang, int cot) {
    printf("Nhap ma tran:\n");
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("Nhap phan tu hang %d cot %d: ", i + 1, j + 1);
            scanf("%d", &matran[i][j]);
        }
    }
}

// Hàm xuất ma trận
void xuatMaTran(int matran[MAX][MAX], int hang, int cot) {
    printf("Ma tran:\n");
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%d\t", matran[i][j]);
        }
        printf("\n");
    }
}

// Hàm tổng 2 ma trận
void tongHaiMaTran(int matran1[MAX][MAX], int matran2[MAX][MAX], int ketqua[MAX][MAX], int hang, int cot) {
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            ketqua[i][j] = matran1[i][j] + matran2[i][j];
        }
    }
}

// Hàm tích 2 ma trận
void tichHaiMaTran(int matran1[MAX][MAX], int matran2[MAX][MAX], int ketqua[MAX][MAX], int hang1, int cot1, int cot2) {
    for (int i = 0; i < hang1; i++) {
        for (int j = 0; j < cot2; j++) {
            ketqua[i][j] = 0;
            for (int k = 0; k < cot1; k++) {
                ketqua[i][j] += matran1[i][k] * matran2[k][j];
            }
        }
    }
}

// Hàm chính
int main() {
    int hang1, cot1, hang2, cot2;

    printf("Nhap so hang cua ma tran 1: ");
    scanf("%d", &hang1);
    printf("Nhap so cot cua ma tran 1: ");
    scanf("%d", &cot1);

    printf("Nhap so hang cua ma tran 2: ");
    scanf("%d", &hang2);
    printf("Nhap so cot cua ma tran 2: ");
    scanf("%d", &cot2);

    if (cot1 != hang2) {
        printf("Khong the nhan hai ma tran voi kich thuoc nay.\n");
        return 1;
    }

    int maTran1[MAX][MAX], maTran2[MAX][MAX], ketQua[MAX][MAX];

    // a. Nhập ma trận
    nhapMaTran(maTran1, hang1, cot1);
    nhapMaTran(maTran2, hang2, cot2);

    // b. Xuất ma trận
    printf("Ma tran 1:\n");
    xuatMaTran(maTran1, hang1, cot1);

    printf("Ma tran 2:\n");
    xuatMaTran(maTran2, hang2, cot2);

    // c. Tính tổng 2 ma trận
    if (hang1 == hang2 && cot1 == cot2) {
        tongHaiMaTran(maTran1, maTran2, ketQua, hang1, cot1);

        printf("Tong hai ma tran:\n");
        xuatMaTran(ketQua, hang1, cot1);
    } else {
        printf("Hai ma tran khong cung kich thuoc nen khong the tinh tong.\n");
    }

    // d. Tính tích 2 ma trận
    tichHaiMaTran(maTran1, maTran2, ketQua, hang1, cot1, cot2);

    printf("Tich hai ma tran:\n");
    xuatMaTran(ketQua, hang1, cot2);

    return 0;
}
