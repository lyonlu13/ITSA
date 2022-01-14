// [C_MM28-易] 計算1到N之間屬於5和7的倍數
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6933
#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  char flag = 0;
  for (int i = 5; i <= n; i++)
    if (!(i % 5) && !(i % 7)) printf(flag++ ? " %d" : "%d", i);

  printf("\n");
  return 0;
}