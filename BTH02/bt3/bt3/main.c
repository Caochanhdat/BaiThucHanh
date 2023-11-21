//
//  main.c
//  bt3
//
//  Created by Cao Chanh Dat on 18/11/2023.
//

#include <stdio.h>
#include <math.h>

//Sử dụng bài 6 (BÀI THỰC HÀNH SỐ 1), nhưng thêm điều kiện kiểm tra có phải là tam giác không? Nếu phải thì tính chu vi, diện tích; nếu không thì in ra không phải.

int main() {
    int a, b, c;
    float dientich;
    
    printf("Nhap canh a:");
    scanf("%d", &a);
    
    printf("Nhap canh b:");
    scanf("%d", &b);
    
    printf("Nhap canh c:");
    scanf("%d", &c);
    
    if (a + b <= c || a + c <= b || b + c <= a) {
      printf("Khong phai la tam giac\n");
      return 0;
}
    int chuvi = a + b + c;
    float s = (a + b + c) / 2;
    
    if (s == 0) {
      printf("Dien tich: Khong co dien tich\n");
      return 0;
      
}      else {
      dientich = sqrt(s * (s - a) * (s - b) * (s - c));
}
      printf("Chu vi: %d\n", chuvi);
      printf("Dien tich: %.0f\n", dientich);

  return 0;
}
