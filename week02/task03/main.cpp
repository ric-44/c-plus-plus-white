#include <iostream>
#include <string>
#include <vector>
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

vector<string> PalindromFilter(const vector<string>& words, int minLength) {
  vector<string> res;
  for (auto w : words) {
    if (IsPalindrom(w) && w.size() >= minLength) {
      res.push_back(w);
    }
  }

  return res;
}

void PrintWords(const vector<string>& words) {
  for (auto w : words) {
    cout << w << " ";
  }
  cout << endl;
}

int main() {
  vector<string> words = {"abacaba", "aba"};
  vector<string> filtered = PalindromFilter(words, 5);
  PrintWords(filtered);

  words = {"abacaba", "aba"};
  filtered = PalindromFilter(words, 2);
  PrintWords(filtered);

  words = {"weew", "bro", "code"};
  filtered = PalindromFilter(words, 4);
  PrintWords(filtered);

  return 0;
}
