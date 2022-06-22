// [C_MM04-易] 計算總和、乘積、差、商和餘數
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6864
#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  cout << a << "+" << b << "=" << a + b << endl;
  cout << a << "*" << b << "=" << a * b << endl;
  cout << a << "-" << b << "=" << a - b << endl;
  cout << a << "/" << b << "=";
  if (a % b >= 0)
    cout << a / b << "..." << a % b << endl;
  else {  // a < 0
    int q = a / b;
    q += (b > 0 ? -1 : 1);
    cout << q << "..." << a - b * q << endl;
  }
  // a=b*q+m
  // -5/-2=2...-1
  // -5/2=-2...-1
  return 0;
}