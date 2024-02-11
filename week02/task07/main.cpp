#include <iostream>
#include <vector>
using namespace std;

vector<int> Reversed(const vector<int>& v) {
  vector<int> res;
  for (int i = v.size() - 1; i >= 0; i--) {
    res.push_back(v[i]);
  }

  return res;
}

void PrintVector(const vector<int>& numbers) {
  for (auto n : numbers) {
    cout << n << " ";
  }
  cout << endl;
}

int main() {
  vector<int> numbers = {1, 5, 3, 4, 2};
  vector<int> reversed = Reversed(numbers);

  cout << "numbers: " << endl;
  PrintVector(numbers);
  cout << "reversed: " << endl;
  PrintVector(reversed);

  return 0;
}
