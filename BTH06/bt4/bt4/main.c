//
//  main.c
//  bt4
//
//  Created by Cao Chanh Dat on 18/11/2023.
//

#include <stdio.h>

// Định nghĩa kiểu dữ liệu Time
typedef struct {
    int gio;
    int phut;
    int giay;
} Time;

// Hàm nhập dữ liệu kiểu Time
Time nhapThoiGian() {
    Time t;
    printf("Nhap gio: ");
    scanf("%d", &t.gio);
    printf("Nhap phut: ");
    scanf("%d", &t.phut);
    printf("Nhap giay: ");
    scanf("%d", &t.giay);
    return t;
}

// Hàm nhằm tăng thời gian hiện có lên x giây
void tangThoiGian(Time *t, int x) {
    int tongGiay = t->gio * 3600 + t->phut * 60 + t->giay + x;
    t->gio = tongGiay / 3600;
    t->phut = (tongGiay % 3600) / 60;
    t->giay = (tongGiay % 3600) % 60;
}

// Hàm chính
int main() {
    // a. Hàm nhập dữ liệu kiểu Time
    printf("Nhap thoi gian:\n");
    Time thoiGian = nhapThoiGian();

    // b. Hàm nhằm tăng thời gian hiện có lên x giây
    int x;
    printf("Nhap so giay muon tang: ");
    scanf("%d", &x);
    tangThoiGian(&thoiGian, x);

    // In thời gian mới
    printf("Thoi gian moi: %02d:%02d:%02d\n", thoiGian.gio, thoiGian.phut, thoiGian.giay);

    return 0;
}
