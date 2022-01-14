// [C_MM04-易] 計算總和、乘積、差、商和餘數
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6864
#include <stdio.h>

int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d+%d=%d\n", a, b, a + b);
  printf("%d*%d=%d\n", a, b, a * b);
  printf("%d-%d=%d\n", a, b, a - b);
  printf("%d/%d=", a, b);
  if (a % b >= 0)
    printf("%d...%d\n", a / b, a % b);
  else {  // a < 0
    int q = a / b;
    q += (b > 0 ? -1 : 1);
    printf("%d...%d\n", q, a - b * q);
  }
  // a=b*q+m
  // -5/-2=2...-1
  // -5/2=-2...-1
  return 0;
}