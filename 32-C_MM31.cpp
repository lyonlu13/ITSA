// [C_MM31-易] 計算1~N內能被2跟3整除，但不能被12整除的整數總和
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6939
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int total = 0;
  for (int i = 6; i <= n; i++)
    if (!(i % 2) && !(i % 3) && (i % 12)) total += i;
  cout << total << endl;
  return 0;
}