#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  int cnt1 = 0;
  int cnt2 = 0;
  int cnt3 = 0;
  rep(i, s.size()) {
    if (s[i] == '1') cnt1++;
    else if (s[i] == '2') cnt2++;
    else if (s[i] == '3') cnt3++;
  }

  if (cnt1 == 1 && cnt2 == 2 && cnt3 == 3) {
    cout << "Yes" << endl;
  }
  else cout << "No" << endl;

  return 0;
}