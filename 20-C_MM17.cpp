// [C_MM17-易] 求最大公因數
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6903
#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  while (a > 0) {
    if (a < b)
      a ^= b ^= a ^= b;  // This is swap
    a %= b;
  }
  cout << b << endl;

  return 0;
}