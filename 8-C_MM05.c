// [C_MM05-易] 計算正方形面積
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6867
#include <stdio.h>
// #include <math.h>  // Linker funcked up... ITSA sucks!!!

// Polyfill
int round(double n) {
  return n + !!((int)(n * 10) % 10 >= 5);
}

int main() {
  double l;
  scanf("%lf", &l);
  printf("%.1lf\n", (double)round(l * l * 10) / 10);
  return 0;
}