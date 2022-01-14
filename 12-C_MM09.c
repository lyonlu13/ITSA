// [C_MM09-易] 計算 i 次方的值
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6879
#include <stdio.h>

int main() {
  int i;
  scanf("%d", &i);
  if (i > 31)
    printf("Value of more than 31\n");
  else
    printf("%d\n", 2 << i - 1);
  return 0;
}