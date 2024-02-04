#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;

  int res = -2;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'f') {
      if (res < -1) {
        res = -1;
      } else {
        res = i;
        break;
      }
    }
  }
  cout << res << endl;

  return 0;
}
