// [C_MM06-易] 英哩轉公里
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6870
#include <stdio.h>

// Polyfill
int round(double n) {
  return n + !!((int)(n * 10) % 10 >= 5);
}

int main() {
  int num;
  scanf("%d", &num);
  printf("%.1lf\n", (double)round(1.6*num*10) / 10);
  return 0;
}