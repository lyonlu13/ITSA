// [C_MM30-易] 質數判別
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6937
#include <stdio.h>

int prime(int n) {
  for (int i = 2; i < n; i++)
    if (!(n % i)) return 0;
  return 1;
}

int main() {
  int n;
  scanf("%d", &n);
  printf(prime(n) ? "YES\n" : "NO\n");
  return 0;
}