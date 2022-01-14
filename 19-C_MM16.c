// [C_MM16-易] 判斷座標是否在圓形的範圍內
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6900
#include <stdio.h>

int main() {
  int x, y;
  scanf("%d %d", &x, &y);
  if (x * x + y * y > 200 * 200)
    printf("outside\n");
  else
    printf("inside\n");

  return 0;
}