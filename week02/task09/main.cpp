#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int WorryCount(const vector<bool>& v) { return count(begin(v), end(v), true); }

void Come(vector<bool>& v, const int& n) { v.resize(v.size() + n, false); }

void Worry(vector<bool>& v, const int& i) { v[i] = true; }

void Quiet(vector<bool>& v, const int& i) { v[i] = false; }

int main() {
  vector<bool> queue;  // true is worry
  int n;               // number of operations
  string oper;         // operation code
  int oper_arg;        // operation argument

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> oper;
    if (oper == "WORRY_COUNT") {
      cout << WorryCount(queue) << endl;
      continue;
    }

    cin >> oper_arg;

    if (oper == "WORRY") {
      Worry(queue, oper_arg);
    } else if (oper == "QUIET") {
      Quiet(queue, oper_arg);
    } else if (oper == "COME") {
      Come(queue, oper_arg);
    }
  }

  return 0;
}
