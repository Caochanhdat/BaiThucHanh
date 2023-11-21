//
//  main.c
//  bt10
//
//  Created by Cao Chanh Dat on 18/11/2023.
//

#include <stdio.h>

//Viết chương trình xác định xem một tờ giấy có độ dày 0.1 mm. Phải gấp đôi tờ giấy bao nhiêu lần để nó có độ dày >1m (bằng 1000 mm).

int main() {
    double doDayToGiay = 0.1;  // Độ dày của tờ giấy (mm)
    double doDayToGiayM = 1000.0;  // Độ dày cần đạt được (mm)
    int lanGap = 0;  // Số lần gấp đôi

    // Tính số lần gấp đôi cần thiết
    while (doDayToGiay < doDayToGiayM) {
        doDayToGiay *= 2;
        lanGap++;
    }

    printf("Tong so lan gap doi de dat do day >1m: %d lan\n", lanGap);

    return 0;
}
