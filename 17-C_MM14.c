// [C_MM14-易] 計算時間的組合
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6894
#include <stdio.h>

int main() {
  int secs;
  scanf("%d", &secs);
  int days = secs / 86400;
  secs -= days * 86400;
  int hours = secs / 3600;
  secs -= hours * 3600;
  int mins = secs / 60;
  secs -= mins * 60;
  printf("%d days\n",days);
  printf("%d hours\n",hours);
  printf("%d minutes\n",mins);
  printf("%d seconds\n",secs);
  return 0;
}