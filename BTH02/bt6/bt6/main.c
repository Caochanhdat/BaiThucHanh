//
//  main.c
//  bt6
//
//  Created by Cao Chanh Dat on 18/11/2023.
//

#include <stdio.h>

//Viết chương trình tính tiền điện gồm các khoảng sau:
//a.Tiền thuê bao điện kế: 1000đ/tháng
//b.Định mức sử dụng điện cho mỗi hộ là: 50 KW với giá 230đ/KW
//c.Nếu phần vượt định mức <= 50KW thì tính giá 480đ/KW
//d.Nếu 50KW < phần vượt định mức < 100KW thì tính giá 700đ/KW
//e.Nếu phần vượt định mức <= 100KW thì tính giá 900đ/KW
//Chỉ số mới và cũ được nhập vào từ bàn phím

int main() {
  float sodien, tiendien, tienthuebao;

  printf("Nhap so dien tieu thu: ");
  scanf("%f", &sodien);

  tienthuebao = 1000;
 
  if (sodien <= 50) {
    tiendien = sodien * 230;
  } else {
   
    tiendien = 50 * 230;
    sodien -= 50;

    if (sodien <= 50) {
      tiendien += sodien * 480;
    } else if (sodien <= 100) {
      tiendien += 50 * 480 + (sodien - 50) * 700;
    } else {
      tiendien += 50 * 480 + 50 * 700 + (sodien - 100) * 900;
    }
  }

 
  printf("Tong tien dien la: %5.0f\n", tiendien + tienthuebao);

  return 0;
}
