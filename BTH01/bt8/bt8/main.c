//
//  main.c
//  bt8
//
//  Created by Cao Chanh Dat on 18/11/2023.
//

#include <stdio.h>

//Viết chương trình nhập vào bán kính của hình tròn. Hãy tính chu vi và diện tích của hình tròn này.

int main() {
    int a, b;
    int r;
    printf("Nhap a:");
    scanf("%d", &a);
    printf("Nhap b:");
    scanf("%d", &b);
    printf("Nhap ban kinh r:");
    scanf("%d", &r);
    
    int chuvi = 2 * (a + b);
    float dthinhtron = (3.14 * r * r);
    
    printf("Chu vi = %d\nDien tich hinh tron = %5.2f", chuvi, dthinhtron );
    
    return 0;
}
