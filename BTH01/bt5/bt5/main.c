//
//  main.c
//  bt5
//
//  Created by Cao Chanh Dat on 18/11/2023.
//

#include <stdio.h>
#include <math.h>
//Viết chương trình tính căn bậc k của một số x nhập vào từ bàn phím. Yêu cầu không sử dụng hàm pow().

int main() {
    float x, c;
    int k;
    
    printf("Nhap k:");
    scanf("%d", &k);
    
    printf("Nhap x:");
    scanf("%f", &x);
        
    c = exp(log(x) / k);
    
    printf("Can bac %d  cua  %5.2f = %5.2f", k , x, c);
    return 0;
}
