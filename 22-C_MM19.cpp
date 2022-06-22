// [C_MM19-易] 電話費計算
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6909
#include <iomanip>
#include <iostream>
using namespace std;

char output[8];

int main() {
  cout << fixed;
  cout << setprecision(1);
  int min;
  double cost;
  cin >> min;
  if (min <= 800)
    cost = min * 0.9;
  else if (min < 1500)
    cost = min * 0.9 * 0.9;
  else
    cost = min * 0.9 * 0.79;
  cout << cost << endl;
  return 0;
}