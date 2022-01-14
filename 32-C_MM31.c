// [C_MM31-易] 計算1~N內能被2跟3整除，但不能被12整除的整數總和
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6939
#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int total = 0;
  for (int i = 6; i <= n; i++)
    if (!(i % 2) && !(i % 3) && (i % 12)) total += i;
  printf("%d\n", total);
  return 0;
}