// [C_AR03-易] 計算陣列中所有元素的立方和
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=1291
#include <stdio.h>

int sum = 0;
int main() {
  for (int i = 0; i < 6; i++) {
    int num;
    scanf("%d", &num);
    sum += (num * num * num);
  }
  printf("%d\n", sum);
  return 0;
}