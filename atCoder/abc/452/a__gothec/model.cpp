#include <iostream>
#include <map>
using namespace std;

int main() {
  int m, d;
  cin >> m >> d;

  map<int, int> days = { {1, 7}, {3, 3}, {5, 5}, {7, 7}, {9, 9} };

  if (days.count(m) && d == days[m]) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
  return 0;
}