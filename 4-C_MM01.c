// [C_MM01-易] 計算梯型面積
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6855
#include <stdio.h>

int main() {
  int top, bottom, height;
  while (scanf("%d %d %d", &top, &bottom, &height) != EOF) {
    printf("Trapezoid area:%.1f\n",((float)top+bottom)*height/2);
  }
  return 0;
}
