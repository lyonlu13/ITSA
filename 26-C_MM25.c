// [C_MM25-易] 計算正整數被3整除之數值之總和
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6925
#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int total = 0;
  for (int i = 3; i <= n; i++) total += (i % 3 ? 0 : i);
  printf("%d\n", total);
  return 0;
}