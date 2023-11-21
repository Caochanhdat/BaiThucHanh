//
//  main.c
//  bt2
//
//  Created by Cao Chanh Dat on 18/11/2023.
//

#include <stdio.h>

//Hãy nhập vào 2 số nguyên, sau đó hãy tính tổng, hiệu, tích, thương.

int main() {
    int a,b;
    int tong, hieu, tich;
    float thuong;
    
    printf("Nhap 2 so nguyen a,b:\n");
    scanf("%d%d", &a, &b);
    
    tong = a + b;
    hieu = a - b;
    tich = a * b;
    thuong = (a / b);
    
    printf("%d + %d = %d\n", a, b, tong);
    printf("%d - %d = %d\n", a, b, hieu);
    printf("%d * %d = %d\n", a, b, tich);
    printf("%d / %d = %.0f\n", a, b, thuong);



    return 0;
}
