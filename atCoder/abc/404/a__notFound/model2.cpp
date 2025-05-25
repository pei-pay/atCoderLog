#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;

int main() {
  string s;
  cin >> s;
  vi bucket(26, 0);

  for (char c : s) {
    bucket[c - 'a'] = 1;
  }

  for (char c = 'a'; c <= 'z'; c++) {
    if (bucket[c - 'a'] == 0) {
      cout << c << "\n";
      return 0;
    }
  }

  return 0;
}