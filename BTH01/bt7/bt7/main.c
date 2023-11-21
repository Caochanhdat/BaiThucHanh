//
//  main.c
//  bt7
//
//  Created by Cao Chanh Dat on 18/11/2023.
//

#include <stdio.h>

//Viết chương trình nhập vào 2 cạnh của hình chữ nhật. Hãy tính chu vi và diện tích của hình chữ nhật này.

int main() {
    int a, b;
    printf("Nhap a:");
    scanf("%d", &a);
    printf("Nhap b:");
    scanf("%d", &b);
    
    int chuvi = 2 * (a + b);
    int dientich = a * b;
    
    printf("Chu vi = %d\nDien tich = %d", chuvi , dientich);
    
    return 0;
}
