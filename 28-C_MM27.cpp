// [C_MM27-易] 計算兩整數間所有整數的總和
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6931
#include <iostream>
using namespace std;

int main() {
  int a, b;
  int total = 0;
  cin >> a >> b;
  if (a > b) a ^= b ^= a ^= b;  // This is swap
  for (int i = a; i <= b; i++) total += i;
  printf("%d\n", total);
  return 0;
}