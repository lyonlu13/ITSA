// [C_MM28-易] 計算1到N之間屬於5和7的倍數
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6933
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  char flag = 0;
  for (int i = 5; i <= n; i++)
    if (!(i % 5) && !(i % 7)) cout << (flag++ ? " " : "") << i;
  cout << endl;
  return 0;
}