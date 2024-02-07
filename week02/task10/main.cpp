#include <iostream>
using namespace std;

void Add(vector<string>& tasks, string task) { tasks.push_back(task); }

void Next(vector<vector<string>>& month_tasks, int n) {
  int d = month_tasks.size() - n;
  for (int i = 0; i < d; i++) {
    month_tasks[n - 1].insert(end(month_tasks[n - 1]),
                              begin(month_tasks[n + i]),
                              end(month_tasks[n + i]));
  }
  month_tasks.resize(n);
}

void Dump(const vector<string>& tasks) {
  int n = tasks.size();
  cout << n << " ";
  for (const auto& task : tasks) {
    cout << task << " ";
  }
  cout << endl;
}

int main() {
  const vector<int> days_in_months = {31, 28, 31, 30, 31, 30,
                                      31, 31, 30, 31, 30, 31};
  int current_month = 0;
  int n;
  cin >> n;
  vector<vector<string>> month_tasks(days_in_months[0]);

  string oper;
  int day;
  string task;
  for (int i = 0; i < n; i++) {
    cin >> oper;
    if (oper == "ADD") {
      cin >> day;
      cin >> task;
      Add(month_tasks[day - 1], task);
    } else if (oper == "NEXT") {
      current_month++;
      current_month %= 12;
      Next(month_tasks, days_in_months[current_month]);
    } else if (oper == "DUMP") {
      cin >> day;
      Dump(month_tasks[day - 1]);
    }
  }

  return 0;
}