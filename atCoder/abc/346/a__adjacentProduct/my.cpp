#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  int before;
  rep(i, n) {
    if(i == 0) {
      cin >> before;
      continue;
    }
    int a;
    cin >> a;
    cout << before * a << " ";
    before = a;
  }
  cout << endl;
  return 0;
}