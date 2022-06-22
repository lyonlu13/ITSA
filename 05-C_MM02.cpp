// [C_MM02-易] 計算三角形面積
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6858
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int bottom, height;
  cout << fixed;
  cout << setprecision(1);
  while (cin >> bottom >> height) {
    cout << (float)bottom * height / 2 << endl;
  }
  return 0;
}
