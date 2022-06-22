// [C_AR01-易] 一維陣列反轉 I
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=674
#include <iostream>
using namespace std;

int arr[100];

int main() {
  int index = 0;
  while (cin >> arr[index])
    index++;
  for (int i = index - 1; i >= 0; i--)
    cout << arr[i] << (i == 0 ? "" : " ");
  cout << endl;
  return 0;
}
