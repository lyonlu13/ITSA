// [C_MM13-易] 停車費計算
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6891
#include <stdio.h>

int main() {
  int h1, m1, h2, m2;
  int h_span, m_span;
  scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
  h_span = h2 - h1;
  m_span = m2 - m1;
  if (m_span < 0) {
    h_span--;
    m_span += 60;
  }

  float unit_hour = (float)h_span + (float)m_span / 60;
  if (unit_hour <= 2) {
    printf("%d\n", (int)(unit_hour * 2) * 30);
  } else if (unit_hour < 4) {
    printf("%d\n", 4 * 30 + (int)(unit_hour * 2 - 4) * 40);
  } else {
    printf("%d\n", 4 * 30 + 4 * 40 + (int)(unit_hour * 2 - 8) * 60);
  }
  return 0;
}