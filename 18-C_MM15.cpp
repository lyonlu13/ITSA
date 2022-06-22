// [C_MM15-易] 判斷座標是否在正方形的範圍內
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6897
#include <iostream>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;
  if (x > 100 || y > 100)
    cout << "outside" << endl;
  else
    cout << "inside" << endl;

  return 0;
}