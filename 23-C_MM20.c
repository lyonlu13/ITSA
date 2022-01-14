// [C_MM20-易] 十進位轉十六進位
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6912
#include <stdio.h>

char output[100];

int main() {
  int a;
  scanf("%d", &a);
  int index = 0;

  while (a > 0) {
    output[index] = a % 16;
    a /= 16;
    index++;
  }

  for (index-=1; index >= 0; index--) {
    printf("%c", output[index] >= 10 ? output[index] - 10 + 'A'
                                     : output[index] + '0');
  }
  printf("\n");

  return 0;
}