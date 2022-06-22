// [C_MM06-易] 英哩轉公里
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6870
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
  int num;
  cin >> num;
  cout << (double)round(1.6 * num * 10) / 10 << endl;
  return 0;
}