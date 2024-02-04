#include <iostream>
#include <string>
using namespace std;

bool IsPalindrom(const string& s) {
  int n = s.size();
  for (int i = 0; i < n / 2; i++) {
    if (s[i] != s[n - 1 - i]) {
      return false;
    }
  }

  return true;
}

int main() {
  string s;
  cin >> s;

  cout << IsPalindrom(s) << endl;

  return 0;
}