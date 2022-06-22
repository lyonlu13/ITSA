// [C_MM12-易] 相遇時間計算
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6888
#include <iostream>
using namespace std;

int ceil(double n) {
  return n + !!((int)(n * 10) % 10 > 0);
}

int main() {
  int d;
  cin >> d;
  cout << ceil((double)d * 100 / (100 - 30 * 2.54)) << endl;
  return 0;
}