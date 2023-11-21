//
//  main.c
//  bt1
//
//  Created by Cao Chanh Dat on 18/11/2023.
//

#include <stdio.h>

//Viết chương trình nhập vào số nguyên dương, in ra thông báo số chẵn hay lẻ.

int main() {
    int n;
    printf("Nhap n:");
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("%d la so chan", n);
    }else {
        printf("%d la so le:", n);
    }
    return 0;
}
