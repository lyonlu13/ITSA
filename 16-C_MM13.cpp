// [C_MM13-易] 停車費計算
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6891
#include <iostream>
using namespace std;

int main() {
  int h1, m1, h2, m2;
  int h_span, m_span;
  cin >> h1 >> m1 >> h2 >> m2;
  h_span = h2 - h1;
  m_span = m2 - m1;
  if (m_span < 0) {
    h_span--;
    m_span += 60;
  }

  float unit_hour = (float)h_span + (float)m_span / 60;

  if (unit_hour <= 2) {
    cout << (int)(unit_hour * 2) * 30 << endl;
  } else if (unit_hour < 4) {
    cout << 4 * 30 + (int)(unit_hour * 2 - 4) * 40 << endl;
  } else {
    cout << 4 * 30 + 4 * 40 + (int)(unit_hour * 2 - 8) * 60 << endl;
  }
  return 0;
}