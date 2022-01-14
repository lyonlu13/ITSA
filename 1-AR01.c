// [C_AR01-易] 一維陣列反轉 I
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=674
#include <stdio.h>

int arr[100];

int main() {
  int index = 0;
  while (scanf("%d", &arr[index]) != EOF)
    index++;
  for (int i = index - 1; i >= 0; i--)
    printf(i == 0 ? "%d" : "%d ", arr[i]);
  printf("\n");
  return 0;
}
