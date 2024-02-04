#include <cmath>
#include <iostream>
using namespace std;

int main() {
  double a, b, c;
  cin >> a >> b >> c;

  if (a == 0) {
    if (b != 0) {
      cout << -c / b << endl;
    }
    return 0;
  }

  double d = b * b - 4 * a * c;
  if (d > 0) {
    cout << (-b + sqrt(d)) / (2 * a) << ' ' << (-b - sqrt(d)) / (2 * a) << endl;
  } else if (d == 0) {
    cout << -b / (2 * a) << endl;
  }

  return 0;
}
