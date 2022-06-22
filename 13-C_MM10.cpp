// [C_MM10-易] 攝氏溫度轉華式溫度
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6882
#include <iomanip>
#include <iostream>
using namespace std;

// Polyfill
int round(double n) {
  return n + !!((int)(n * 10) % 10 >= 5);
}

int main() {
  cout << fixed;
  cout << setprecision(1);
  double c;
  cin >> c;
  cout << (double)round((c * 9 / 5 + 32) * 10) / 10 << endl;
  return 0;
}