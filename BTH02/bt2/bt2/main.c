//
//  main.c
//  bt2
//
//  Created by Cao Chanh Dat on 18/11/2023.
//

#include <stdio.h>

//Viết chương trình nhập vào 3 số nguyên, hãy tìm giá trị cực đại trong 3 số vừa nhập.

int main() {
    int a, b, c;
    printf("Nhap a:");
    scanf("%d", &a);
    printf("Nhap b:");
    scanf("%d", &b);
    printf("Nhap b:");
    scanf("%d", &c);
    
    int max = a;
    
    if(max < b){
     max = b;
    } if (max < c) {
     max = c;
    }
    printf("Gia tri cuc dai la: %d ", max);
    return 0;
}
