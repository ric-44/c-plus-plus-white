#include <iostream>
#include <map>
#include <vector>

using namespace std;

void NewBus(map<string, vector<string>>& buses_to_stops,
            map<string, vector<string>>& stops_to_buses, const string& bus,
            const vector<string>& stops) {
  buses_to_stops[bus] = stops;
  for (const auto& stop : stops) {
    stops_to_buses[stop].push_back(bus);
  }
}

void BusesForStop(const map<string, vector<string>>& stops_to_buses,
                  const string& stop) {
  if (stops_to_buses.count(stop) == 0) {
    cout << "No stop" << endl;
    return;
  }
  for (const auto& bus : stops_to_buses.at(stop)) {
    cout << bus << " ";
  }
  cout << endl;
}

void StopsForBus(const map<string, vector<string>>& buses_to_stops,
                 const map<string, vector<string>>& stops_to_buses,
                 const string& bus) {
  if (buses_to_stops.count(bus) == 0) {
    cout << "No bus" << endl;
    return;
  }
  for (const auto& stop : buses_to_stops.at(bus)) {
    cout << "Stop " << stop << ": ";
    if (stops_to_buses.at(stop).size() == 1) {
      cout << "no interchange" << endl;
      continue;
    }
    for (const auto& bus_for_stop : stops_to_buses.at(stop)) {
      if (bus_for_stop != bus) {
        cout << bus_for_stop << " ";
      }
    }
    cout << endl;
  }
}

void AllBuses(const map<string, vector<string>>& buses_to_stops) {
  if (buses_to_stops.size() == 0) {
    cout << "No buses" << endl;
    return;
  }
  for (const auto& [bus, stops] : buses_to_stops) {
    cout << "Bus " << bus << ": ";
    for (const auto& stop : stops) {
      cout << stop << " ";
    }
    cout << endl;
  }
}

int main() {
  int n;
  cin >> n;

  map<string, vector<string>> buses_to_stops;
  map<string, vector<string>> stops_to_buses;
  string bus, stop;
  int m;
  vector<string> stops;
  string query;
  for (int i = 0; i < n; i++) {
    cin >> query;

    if (query == "NEW_BUS") {
      cin >> bus;
      cin >> m;
      stops.clear();
      for (int j = 0; j < m; j++) {
        cin >> stop;
        stops.push_back(stop);
      }
      NewBus(buses_to_stops, stops_to_buses, bus, stops);
    } else if (query == "BUSES_FOR_STOP") {
      cin >> stop;
      BusesForStop(stops_to_buses, stop);
    } else if (query == "STOPS_FOR_BUS") {
      cin >> bus;
      StopsForBus(buses_to_stops, stops_to_buses, bus);
    } else if (query == "ALL_BUSES") {
      AllBuses(buses_to_stops);
    }
  }

  return 0;
}
