// [C_MM33-易] 找1~N的完美數
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6943
#include <iostream>
using namespace std;

int perfact(int n) {
  int tem = n;
  for (int i = 1; i < n; i++)
    if (!(n % i)) tem -= i;
  return !tem;
}

int main() {
  int n;
  cin >> n;
  char flag = 0;
  for (int i = 1; i <= n; i++)
    if (perfact(i)) cout << (flag++ ? " " : "") << i;
  cout << endl;
  return 0;
}