// [C_MM18-易] 十進制轉二進制
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6906
#include <iostream>
using namespace std;

int output[8];

int main() {
  int a;
  cin >> a;
  int index = 0;
  if (a < 0) {
    a = 128 + a;
    output[7] = 1;
  }
  while (a > 0) {
    output[index] = a % 2;
    a /= 2;
    index++;
  }

  for (index = 7; index >= 0; index--) {
    cout << output[index];
  }
  cout << endl;

  return 0;
}