// [C_MM30-易] 質數判別
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6937
#include <iostream>
using namespace std;

int prime(int n) {
  for (int i = 2; i < n; i++)
    if (!(n % i)) return 0;
  return 1;
}

int main() {
  int n;
  cin >> n;
  cout << (prime(n) ? "YES" : "NO") << endl;
  return 0;
}