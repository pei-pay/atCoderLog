#include <iostream>
#include <map>
using namespace std;

int main() {
  string s;
  cin >> s;
  map<char, int> mp;
  for (auto& nx : s) { mp[nx]++; }
  for (auto& nx : mp) {
    if (nx.second == 1) {
      cout << nx.first << endl;
    }
  }
  return 0;
}