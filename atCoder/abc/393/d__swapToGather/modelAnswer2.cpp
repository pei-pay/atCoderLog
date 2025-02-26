#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  string s;
  cin >> n >> s;
  vector<int> p;
  rep(i, n) if (s[i] == '1') p.push_back(i); // Collect the positions of '1's in the string
  int k = p.size();
  rep(i, k) p[i] -= i;  // Adjust the positions to relative positions
  int med = p[k / 2];
  long long ans = 0; // Find the median of the adjusted positions
  rep(i, k) ans += abs(med - p[i]);  // Calculate the minimum number of swaps needed
  cout << ans << endl;
  return 0;
}