#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  rep(i, n) {
    cout << n - i;
    if(i != n - 1 ) cout << ",";
  }
  cout << endl;
  return 0;
}