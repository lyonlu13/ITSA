// [C_AR02-易] 一維陣列反轉 II
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=1289
#include <iostream>
using namespace std;

int arr[6];

int main() {
  for (int i = 0; i < 6; i++)
    cin >> arr[i];
  for (int i = 5; i >= 0; i--)
    cout << arr[i] << (i == 0 ? "" : " ");
  cout << endl;
  return 0;
}
