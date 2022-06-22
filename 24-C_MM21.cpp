// [C_MM21-易] 算階乘
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6915
#include <iostream>
using namespace std;

int main() {
  long long res = 1;
  int a;
  cin >> a;
  while (a > 0) res *= a--;
  cout << res << endl;
  return 0;
}