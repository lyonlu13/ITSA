// [C_MM34-易] 因數問題
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6943
#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  char flag = 0;
  for (int i = 1; i <= n; i++)
    if (!(n % i)) printf(flag++ ? " %d" : "%d", i);
  printf("\n");
  return 0;
}