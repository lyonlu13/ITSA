// [C_MM29-易] 最大質數問題
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6935
#include <stdio.h>

int prime(int n) {
  for (int i = 2; i < n; i++)
    if (!(n % i)) return 0;
  return 1;
}

int main() {
  int n;
  int largest = 1;
  scanf("%d", &n);
  for (int i = 1; i < n; i++)
    if (prime(i)) largest = i;
  printf("%d\n", largest);
  return 0;
}