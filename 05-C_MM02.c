// [C_MM02-易] 計算三角形面積
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6858
#include <stdio.h>

int main() {
  int bottom, height;
  while (scanf("%d %d",  &bottom, &height) != EOF) {
    printf("%.1f\n",(float)bottom*height/2);
  }
  return 0;
}
