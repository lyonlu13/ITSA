// [C_MM33-易] 找1~N的完美數
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6943
#include <stdio.h>

int perfact(int n) {
  int tem = n;
  for (int i = 1; i < n; i++)
    if (!(n % i)) tem -= i;
  return !tem;
}

int main() {
  int n;
  scanf("%d", &n);
  char flag = 0;
  for (int i = 1; i <= n; i++)
    if (perfact(i)) printf(flag++ ? " %d" : "%d", i);
  printf("\n");
  return 0;
}