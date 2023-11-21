//
//  main.c
//  bt7
//
//  Created by Cao Chanh Dat on 18/11/2023.
//

#include <stdio.h>

//Viết chương trình trò chơi oăn tù tì sao cho người chơi luôn thua máy.

int main() {
  int n;
  printf("Nhap n trong do n = 1 tuong trung cai bua, 2 la bao, 3 la keo\n  ");
  printf("Ban la nguoi choi va ban chon la:");
  scanf("%d", &n);

  switch(n) {
    case 1:
      printf("Vay may ra bao, thua nhe!!!\n");
      break;
    case 2:
      printf("Vay may ra keo, thua nhe!!!\n");
      break;
    case 3:
      printf("Vay may ra bua, thua nhe!!!\n");
      break;
    default:
      printf("Loi nhap du lieu\n");
  }

  return 0;
}
