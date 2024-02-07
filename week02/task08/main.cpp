#include <iostream>
#include <vector>
using namespace std;

void PrintVector(const vector<int>& v) {
  for (auto x : v) {
    cout << x << " ";
  }
  cout << endl;
}

int Average(const vector<int>& v) {
  int sum = 0;
  for (const auto& x : v) {
    sum += x;
  }

  return sum / v.size();
}

vector<int> IndexesGreaterThan(const vector<int>& v, const int& n) {
  vector<int> res;
  for (int i = 0; i < v.size(); i++) {
    if (v[i] > n) {
      res.push_back(i);
    }
  }

  return res;
}

int main() {
  int n;
  cin >> n;
  vector<int> temp(n);
  for (int& s : temp) {
    cin >> s;
  }

  int avg = Average(temp);
  vector<int> res = IndexesGreaterThan(temp, avg);
  cout << res.size() << endl;
  PrintVector(res);

  return 0;
}
