// [C_MM21-易] 算階乘
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6915
#include <stdio.h>

int main() {
  long long res = 1;
  int a;
  scanf("%d", &a);
  while (a > 0) res *= a--;

  printf("%lld\n", res);

  return 0;
}