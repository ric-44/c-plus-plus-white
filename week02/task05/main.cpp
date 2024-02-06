#include <iostream>
#include <string>
#include <vector>
using namespace std;

void MoveStrings(vector<string>& source, vector<string>& destination) {
  for (auto w : source) {
    destination.push_back(w);
  }
  source.clear();
}

void PrintWords(const vector<string>& words) {
  for (auto w : words) {
    cout << w << " ";
  }
  cout << endl;
}

int main() {
  vector<string> source = {"a", "b", "c"};
  vector<string> destination = {"z"};

  MoveStrings(source, destination);
  cout << "source: " << endl;
  PrintWords(source);
  cout << "destination: " << endl;
  PrintWords(destination);

  return 0;
}