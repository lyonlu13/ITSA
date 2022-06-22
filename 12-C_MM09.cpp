// [C_MM09-易] 計算 i 次方的值
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6879
#include <iostream>
using namespace std;

int main() {
  int i;
  cin >> i;
  if (i > 31)
    cout << "Value of more than 31" << endl;
  else
    cout << (2 << i - 1) << endl;
  return 0;
}