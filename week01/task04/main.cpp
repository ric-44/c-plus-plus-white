#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  if (b == 0) {
    cout << "Impossible" << endl;
    return 0;
  }

  int res = a / b;
  cout << res << endl;

  return 0;
}
