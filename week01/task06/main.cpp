#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  for (int x = a; x <= b; x++) {
    if (x % 2 == 0) {
      cout << x << " ";
    }
  }
  cout << endl;

  return 0;
}
