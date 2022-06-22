// [C_MM14-易] 計算時間的組合
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6894
#include <iostream>
using namespace std;

int main() {
  int secs;
  cin >> secs;
  int days = secs / 86400;
  secs -= days * 86400;
  int hours = secs / 3600;
  secs -= hours * 3600;
  int mins = secs / 60;
  secs -= mins * 60;
  cout << days << " days"
       << endl;
  cout << hours << " hours"
       << endl;
  cout << mins << " minutes"
       << endl;
  cout << secs << " seconds"
       << endl;
  return 0;
}