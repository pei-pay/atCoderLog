#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)

int N, h[100009];
int dp[100009];
vector<int> Answer;

int main() {
  cin >> N;
  rep1(i, N) cin >> h[i];

  dp[1] = 0;
  dp[2] = abs(h[2] - h[1]);
  for (int i = 3; i <= N; i++) {
    dp[i] = min(dp[i - 2] + abs(h[i] - h[i - 2]), dp[i - 1] + abs(h[i] - h[i - 1]));
  }

  int place = N;
  while (true) {
    Answer.push_back(place);
    if (place == 1) break;

    if (dp[place - 1] + abs(h[place] - h[place - 1]) == dp[place]) place = place - 1;
    else place = place - 2;
  }

  reverse(Answer.begin(), Answer.end());

  cout << Answer.size() << endl;
  rep(i, Answer.size()) {
    if (i) cout << " ";
    cout << Answer[i];
  }
  cout << endl;

  return 0;
}