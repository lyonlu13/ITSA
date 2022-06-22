// [C_MM25-易] 計算正整數被3整除之數值之總和
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6925
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int total = 0;
  for (int i = 3; i <= n; i++) total += (i % 3 ? 0 : i);
  cout << total << endl;
  return 0;
}