//
//  main.c
//  bt6
//
//  Created by Cao Chanh Dat on 18/11/2023.
//

#include <stdio.h>
#include <math.h>
//Viết chương trình nhập vào 3 cạnh của một tam giác (giả sử số liệu nhập vào luôn đảm bảo tạo thành tam giác). Hãy tính chu vi và diện tích của tam giác này.

int main() {
    float a, b, c, p, s;
    
    printf("Nhap a:");
    scanf("%f", &a);
    printf("Nhap b:");
    scanf("%f", &b);
    printf("Nhap c:");
    scanf("%f", &c);
    
    p = (a + b + c) / 2;
    s = sqrt(p*(p-a)*(p-b)*(p-c));
    
    printf("chu vi = %5.2f, va dien tich tam giac = %5.2f", 2*p, s);
    
    return 0;
}
