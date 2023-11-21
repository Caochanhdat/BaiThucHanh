//
//  main.c
//  bt5
//
//  Created by Cao Chanh Dat on 18/11/2023.
//

#include <stdio.h>

//Viết chương trình nhập số giờ làm và lương/giờ rồi tính số tiền lương tổng cộng. Nếu số giờ làm lớn hơn 40 thì những giờ làm dôi ra được tính 1,5 lần.

int main() {
    int gio, luong;
    float tongluong;
    
    printf("Nhap gio:");
    scanf("%d", &gio);
    
    printf("Nhap luong:");
    scanf("%d", &luong);
    
    tongluong = gio * luong;
    
    if(gio > 40){
        tongluong += (gio - 40) * luong * 1.5;
    }else {
    }
    printf("Tong tien luong: %.2f\n", tongluong);

    
    return 0;
}
