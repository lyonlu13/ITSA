// [C_MM20-易] 十進位轉十六進位
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6912
#include <iostream>
using namespace std;

char output[100];

int main() {
  int a;
  cin >> a;
  int index = 0;

  while (a > 0) {
    output[index] = a % 16;
    a /= 16;
    index++;
  }

  for (index -= 1; index >= 0; index--) {
    cout << (char)(output[index] >= 10 ? output[index] - 10 + 'A'
                                       : output[index] + '0');
  }
  cout << endl;

  return 0;
}