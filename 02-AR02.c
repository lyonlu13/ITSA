// [C_AR02-易] 一維陣列反轉 II
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=1289
#include <stdio.h>

int arr[6];

int main() {
  for (int i = 0; i < 6; i++)
    scanf("%d", &arr[i]);
  for (int i = 5; i >= 0; i--)
    printf(i == 0 ? "%d" : "%d ", arr[i]);
  printf("\n");
  return 0;
}
