#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;

  string ans;
  while (true) {
    int mod = n % 16;
    if (mod == 10) {
      ans.push_back('A');
    } else if (mod == 11) {
      ans.push_back('B');
    }
    else if (mod == 12) {
      ans.push_back('C');
    }
    else if (mod == 13) {
      ans.push_back('D');
    }
    else if (mod == 14) {
      ans.push_back('E');
    }
    else if (mod == 15) {
      ans.push_back('F');
    } else {
      ans.push_back(char(mod + 48));
    }
    n /= 16;
    if (n == 0) break;
  }

  reverse(ans.begin(), ans.end());

  if(ans.length() == 1) {
    cout << 0 << ans << endl;
  } else {
    cout << ans << endl;
  }
  return 0;
}