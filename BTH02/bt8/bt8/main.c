//
//  main.c
//  bt8
//
//  Created by Cao Chanh Dat on 18/11/2023.
//

#include <stdio.h>

/*Viết chương trình nhập vào 2 số x, y và 1 trong 4 toán tử +, -, *, /
 Nếu là + thì in ra kết quả x + y
 Nếu là – thì in ra kết quả x – y
 Nếu là * thì in ra kết quả x * y
 Nếu là / thì in ra kết quả x / y (nếu y = 0 thì thông báo không chia được)*/

int main() {
    int x, y; char op;
    
    printf("Nhap vao so x: "); scanf("%d", &x);
    
    printf("Nhap vao so y: "); scanf("%d", &y);
    
    printf("Nhap vao toan tu (+, -, *, /): "); scanf(" %c", &op);
    
    switch(op) {
        case '+':
            printf("Ket qua: %d ", x + y);
            break;
        case '-':
            printf("Ket qua: %d ", x - y);
            break;
        case '*':
            printf("Ket qua: %d ", x * y);
            break;
        case '/':
            if (y == 0) {
                printf("Khong chia duoc.\n");
            } else {
                printf("Ket qua: %d ", x / y); }
            break;
        efault:
            printf("Toan tu khong hop le.\n");
            break;
    }
    
    return 0;
}
