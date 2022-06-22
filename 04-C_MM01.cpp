// [C_MM01-易] 計算梯型面積
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6855
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int top, bottom, height;
  cout << fixed;
  cout << setprecision(1);
  while (cin >> top >> bottom >> height) {
    cout << "Trapezoid area:" << ((float)top + bottom) * height / 2 << endl;
  }
  return 0;
}
