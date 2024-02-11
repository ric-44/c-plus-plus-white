#include <iostream>
#include <map>
#include <set>

using namespace std;

void Add(map<string, set<string>>& synonyms, const string& word1,
         const string& word2) {
  synonyms[word1].insert(word2);
  synonyms[word2].insert(word1);
}

void Count(const map<string, set<string>>& synonyms, const string& word) {
  if (synonyms.count(word) > 0) {
    cout << synonyms.at(word).size() << endl;
  } else {
    cout << 0 << endl;
  }
}

void Check(const map<string, set<string>>& synonyms, const string& word1,
           const string& word2) {
  if (synonyms.count(word1) > 0 && synonyms.at(word1).count(word2) > 0) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}

int main() {
  int n;
  cin >> n;

  map<string, set<string>> synonyms;
  string query;
  string word1, word2;
  for (int i = 0; i < n; i++) {
    cin >> query;

    if (query == "ADD") {
      cin >> word1 >> word2;
      Add(synonyms, word1, word2);
    } else if (query == "COUNT") {
      cin >> word1;
      Count(synonyms, word1);
    } else if (query == "CHECK") {
      cin >> word1 >> word2;
      Check(synonyms, word1, word2);
    }
  }

  return 0;
}
