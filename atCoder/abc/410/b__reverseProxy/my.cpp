#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int n, q;
  cin >> n >> q;
  vi b(n, 0);
  vi a(q);
  vi x(q);
  rep(i, q) {
    cin >> x[i];
  }

  rep(i, q) {
    if(x[i] >= 1) {
      b[x[i]-1]++;
      a[i] = x[i];
    }
    else if (x[i] == 0) {
      int min = 110;
      int minIndex = -1;
      rep(j, n) {
        if(b[j] < min) {
          min = b[j];
          minIndex = j;
        }
      }
      b[minIndex]++;
      a[i] = minIndex + 1;
    }
  }

  rep(i, q) {
    cout << a[i] << " ";
  }
  cout << "\n";
  return 0;
}