#include <iostream>
using namespace std;

int main() {
  string a, b, c;
  cin >> a >> b >> c;

  string min_string = a;
  if (b < min_string) {
    min_string = b;
  }
  if (c < min_string) {
    min_string = c;
  }

  cout << min_string << endl;

  return 0;
}
