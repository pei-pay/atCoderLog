#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

/*
 * TLE
 */
int main() {
  int n;
  cin >> n;
  vector<int> h(n);
  rep(i, n) cin >> h[i];

  long long t = 0;
  while(!h.empty()) {
    t++;
    if(t % 3 == 0) {
      h.front() -= 3;
    } else {
      h.front()--;
    }
    if (h.front() <= 0) {
      h.erase(h.begin());
    }
  }

  cout << t << endl;
  return 0;
}