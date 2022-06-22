// [C_MM16-易] 判斷座標是否在圓形的範圍內
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6900
#include <iostream>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;
  if (x * x + y * y > 200 * 200)
    cout << "outside" << endl;
  else
    cout << "inside" << endl;

  return 0;
}