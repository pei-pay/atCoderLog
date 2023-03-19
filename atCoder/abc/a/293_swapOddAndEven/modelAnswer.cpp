#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.size(); // s の長さを取得
  for (int i = 0; i < n / 2; i++) swap(s[2 * i], s[2 * i + 1]);
  cout << s << '\n';
}