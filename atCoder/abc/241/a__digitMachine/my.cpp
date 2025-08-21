#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int n = 10;
  vi a(n);
  rep(i, n) cin >> a[i];

  cout << a[a[a[0]]] << endl;

  return 0;
}