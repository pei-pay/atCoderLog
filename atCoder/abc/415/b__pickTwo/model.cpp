#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  string s;
  cin >> s;
  vi a;

  rep(i, s.size()) {
    if(s[i] == '#') a.push_back(i + 1);
  }

  for(int i = 0; i < a.size(); i += 2) {
    cout << a[i] << "," << a[i + 1] << endl;
  }
  
  return 0;
}