// [C_MM24-易] 計算薪水
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6922
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  double total = 0;
  int hours, unit;
  cin >> hours >> unit;

  if (hours - 120 > 0) {
    total += 1.66 * (hours - 120) * unit;
    hours = 120;
  }

  if (hours - 60 > 0) {
    total += 1.33 * (hours - 60) * unit;
    hours = 60;
  }

  total += hours * unit;

  cout << fixed;
  cout << setprecision(1);
  cout << total << endl;

  return 0;
}