#include <iostream>
#include <map>

using namespace std;

void ChangeCapital(map<string, string>& countries, const string& country,
                   const string& new_capital) {
  if (countries.count(country) == 0) {
    cout << "Introduce new country " << country << " with capital "
         << new_capital << endl;
    countries[country] = new_capital;
  } else if (countries[country] == new_capital) {
    cout << "Country " << country << " hasn't changed its capital" << endl;
  } else {
    cout << "Country " << country << " has changed its capital from "
         << countries[country] << " to " << new_capital << endl;
    countries[country] = new_capital;
  }
}

void Rename(map<string, string>& countries, const string& old_country,
            const string& new_country) {
  if (old_country == new_country || countries.count(old_country) == 0 ||
      countries.count(new_country) > 0) {
    cout << "Incorrect rename, skip" << endl;
    return;
  }

  countries[new_country] = countries[old_country];
  countries.erase(old_country);
  cout << "Country " << old_country << " with capital "
       << countries[new_country] << " has been renamed to " << new_country
       << endl;
}

void About(const map<string, string>& countries, const string& country) {
  if (countries.count(country) == 0) {
    cout << "Country " << country << " doesn't exist" << endl;
    return;
  }

  cout << "Country " << country << " has capital " << countries.at(country)
       << endl;
}

void Dump(const map<string, string>& m) {
  if (m.size() == 0) {
    cout << "There are no countries in the world" << endl;
    return;
  }

  for (const auto& x : m) {
    cout << x.first << "/" << x.second << " ";
  }
  cout << endl;
}

int main() {
  int n;
  cin >> n;

  string query;
  string arg1, arg2;
  map<string, string> countries;
  for (int i = 0; i < n; i++) {
    cin >> query;
    if (query == "CHANGE_CAPITAL") {
      cin >> arg1 >> arg2;
      ChangeCapital(countries, arg1, arg2);
    } else if (query == "RENAME") {
      cin >> arg1 >> arg2;
      Rename(countries, arg1, arg2);
    } else if (query == "ABOUT") {
      cin >> arg1;
      About(countries, arg1);
    } else if (query == "DUMP") {
      Dump(countries);
    }
  }

  return 0;
}
