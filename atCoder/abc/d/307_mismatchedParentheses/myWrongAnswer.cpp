#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int N;
string S;
stack<int> X;
vector<pair<int, int>> P;

/**
 * TLE
*/
int main() {
  cin >> N;
  cin >> S;

  rep(i, N) {
    if (S[i] == '(') {
      X.push(i);
    }
    if (S[i] == ')') {
      if (!X.empty()) {
        P.push_back(make_pair(X.top(), i));
        X.pop();
      }
    }
  }

  vector<bool> D(N);

  rep(i, P.size()) {
    for (int j = P[i].first; j <= P[i].second; j++) {
      D[j] = true;
    }
  }

  rep(i, N) {
    if (D[i]) continue;
    cout << S[i];
  }
  cout << endl;

  return 0;
}