#include <iostream>
#include <vector>
using namespace std;

vector<string> word = { "and", "not", "that", "the", "you" };

int main() {
  int n;
  cin >> n;
  bool res = false;
  for (int i = 0;i < n;i++) {
    string s;
    cin >> s;
    for (auto& nx : word) {
      if (s == nx) { res = true; }
    }
  }
  if (res) { cout << "Yes\n"; }
  else { cout << "No\n"; }
  return 0;
}