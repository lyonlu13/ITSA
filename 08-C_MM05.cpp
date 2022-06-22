// [C_MM05-易] 計算正方形面積
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6867
#include <iomanip>
#include <iostream>
using namespace std;
// #include <math.h>  // Linker funcked up... ITSA sucks!!!

// Polyfill
int round(double n) {
  return n + !!((int)(n * 10) % 10 >= 5);
}

int main() {
  cout << fixed;
  cout << setprecision(1);
  double l;
  cin >> l;
  cout << (double)round(l * l * 10) / 10 << endl;
  return 0;
}