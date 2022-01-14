// [C_MM15-易] 判斷座標是否在正方形的範圍內
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6897
#include <stdio.h>

int main() {
  int x, y;
  scanf("%d %d", &x, &y);
  if (x > 100 || y > 100)
    printf("outside\n");
  else
    printf("inside\n");

  return 0;
}