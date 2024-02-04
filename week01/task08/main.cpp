#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  if (b > a) {
    int t = a;
    a = b;
    b = t;
  }

  int r;
  while (b > 0) {
    r = a % b;
    a = b;
    b = r;
  }

  cout << a << endl;

  return 0;
}
