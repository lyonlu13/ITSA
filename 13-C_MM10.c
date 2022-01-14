// [C_MM10-易] 攝氏溫度轉華式溫度
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6882
#include <stdio.h>

// Polyfill
int round(double n) {
  return n + !!((int)(n * 10) % 10 >= 5);
}

int main() {
  double c;
  scanf("%lf", &c);
  printf("%.1lf\n", (double)round((c * 9 / 5 + 32) * 10) / 10);
  return 0;
}