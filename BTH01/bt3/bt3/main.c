//
//  main.c
//  bt3
//
//  Created by Cao Chanh Dat on 18/11/2023.
//

#include <stdio.h>
#include <math.h>

//Viết chương trình tính Sin, Cos của một số x nhập vào từ bàn phím, với x là số độ cần tính.

int main() {
    int x;
    printf("Nhap so x:");
    scanf("%d", &x);
    
    float sinx = sin(x * 3.1416/ 180);
      float cosx = cos(x * 3.1416/ 180);
      
    printf("Sin (%d) = %5.2f\nCos (%d) = %5.2f\n", x, sinx, x, cosx);
    
    return 0;
}
