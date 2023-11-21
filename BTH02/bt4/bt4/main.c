//
//  main.c
//  bt4
//
//  Created by Cao Chanh Dat on 18/11/2023.
//

#include <stdio.h>

//Viết chương trình nhập vào điểm 3 môn thi: Toán, Lý, Hóa của học sinh. Nếu tổng điểm >= 15 và không có môn nào dưới 4 thì in kết quả đậu. Nếu đậu mà các môn đều lớn hơn 5 thì in ra lời phê "Học đều các môn", ngược lại in ra "Học chưa đều các môn", các trường hợp khác là "Thi hỏng".

int main() {
    float toan, ly, hoa;
    
    printf("Nhap diem toan:");
    scanf("%f", &toan);
    
    printf("Nhap diem ly:");
    scanf("%f", &ly);
    
    printf("Nhap diem hoa:");
    scanf("%f", &hoa);
    
    if((toan + ly + hoa) >= 15 || toan >= 4 || ly >= 4 || hoa >= 4) {
        printf("Dau.\n");
        
    if(toan > 5 || ly > 5 || hoa > 5){
        printf("Deu qua mon.\n");
        
    } else {
        printf("Hoc chua deu cac mon.\n");}
        
     } else {
        printf("Thi hong.\n");
    }
    return 0;
}
