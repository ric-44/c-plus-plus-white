#include <iostream>
#include <vector>
using namespace std;

void Reverse(vector<int>& v) {
  int tmp;
  int n = v.size();
  for (int i = 0; i < n / 2; i++) {
    tmp = v[i];
    v[i] = v[n - 1 - i];
    v[n - 1 - i] = tmp;
  }
}

void PrintVector(const vector<int>& numbers) {
  for (auto n : numbers) {
    cout << n << " ";
  }
  cout << endl;
}

int main() {
  vector<int> numbers = {1, 5, 3, 4, 2};

  Reverse(numbers);
  PrintVector(numbers);

  return 0;
}
