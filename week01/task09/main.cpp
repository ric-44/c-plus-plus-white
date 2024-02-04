#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> res;

  while (n > 0) {
    res.push_back(n % 2);
    n /= 2;
  }

  for (int i = res.size() - 1; i >= 0; i--) {
    cout << res[i];
  }
  cout << endl;

  return 0;
}
