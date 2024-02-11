#include <iostream>
#include <map>
#include <vector>

using namespace std;

void NewBus(map<vector<string>, int>& buses, vector<string>& stops) {
  if (buses.count(stops) > 0) {
    cout << "Already exists for " << buses.at(stops) << endl;
    return;
  }
  int n = buses.size() + 1;
  buses[stops] = n;
  cout << "New bus " << n << endl;
}

int main() {
  int n;
  cin >> n;

  int m;
  string stop;
  vector<string> stops;
  map<vector<string>, int> buses;
  for (int i = 0; i < n; i++) {
    cin >> m;
    stops.clear();
    for (int j = 0; j < m; j++) {
      cin >> stop;
      stops.push_back(stop);
    }
    NewBus(buses, stops);
  }

  return 0;
}
