// [C_MM34-易] 因數問題
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6945
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  char flag = 0;
  for (int i = 1; i <= n; i++)
    if (!(n % i)) cout << (flag++ ? " " : "") << i;
  cout << endl;
  return 0;
}