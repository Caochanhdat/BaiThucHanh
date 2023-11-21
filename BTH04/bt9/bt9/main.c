//
//  main.c
//  bt9
//
//  Created by Cao Chanh Dat on 18/11/2023.
//

#include <stdio.h>
#include <math.h>
//Viết hàm tính  1 + 1/x + 2/x2 + 3/x3 + … + n/xn

double tinhTong(double x, int n) {
  double tong = 0.0;
  int i;
  for (i = 1; i <= n; i++) {
       tong += 1.0 / pow(x, i);
  }
  return tong;
}

int main(int argc, char *argv[]) {
  int n;
  double x;

  printf("Nhap gia tri cua n: ");
  scanf("%d", &n);

  printf("Nhap gia tri cua x: ");
  scanf("%lf", &x);

  double ketQua = tinhTong(x, n);
  printf("Tong cua chuoi 1 + 1/x + 2/x^2 + 3/x^3 + ... + %d/x^%d la: %lf", n, n, ketQua);

  return 0;
}
