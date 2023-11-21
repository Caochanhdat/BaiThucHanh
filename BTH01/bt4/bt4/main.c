//
//  main.c
//  bt4
//
//  Created by Cao Chanh Dat on 18/11/2023.
//

#include <stdio.h>
#include <math.h>

//Viết chương trình tính căn bậc 2 của một số x nhập vào từ bàn phím.

int main() {
    float x, c;
    printf("Nhap x:");
    scanf("%f", &x);
    
    c = sqrt(x);
    
    printf("Can bac hai cua %5.2f = %5.2f", x, c);
    return 0;
}
