#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int n, x;
  cin >> n >> x;
  vi a(n);
  rep(i,n) cin >> a[i];
  vi b(n, 0);

  int i = x - 1; // 0-index
  int cnt = 0;

  do {
    b[i] = 1;
    i = a[i] - 1; // 0-index
    cnt++;
  } while(!b[i]);

  cout << cnt << endl;

  return 0;
}