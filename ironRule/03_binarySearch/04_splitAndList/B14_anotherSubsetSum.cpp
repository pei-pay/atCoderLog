#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)

/**
 * 配列Aにあるカードからいくつか選んだ時の合計として考えられるものを配列にして返す
 * (ビット全探索を使う)
*/
vector<long long> enumerate(vector<long long> A) {
  vector<long long> sumList;
  rep(i, (1 << A.size())) {
    long long sum = 0;
    rep(j, A.size()) {
      int wari = (1 << j);
      if ((i / wari) % 2 == 1) {
        sum += A[j];
      }
    }
    sumList.push_back(sum);
  }
  return sumList;
}

int N, K;
long long A[39];
int main() {
  // 入力
  cin >> N >> K;
  rep1(i, N) cin >> A[i];

  // カードを半分ずつに分ける
  vector<long long> L1, L2;
  rep1(i, N / 2) L1.push_back(A[i]);
  for (int i = 1 + N / 2; i <= N; i++) L2.push_back(A[i]);

  // それぞれについてあり得るカードの合計を全列挙
  vector<long long> sum1 = enumerate(L1);
  vector<long long> sum2 = enumerate(L2);

  // ソートしておく
  sort(sum1.begin(), sum1.end());
  sort(sum2.begin(), sum2.end());

  // 二分探索で sum1[i] + sum[2] = K となるものが存在するか見つける
  rep(i, sum1.size()) {
    int pos = lower_bound(sum2.begin(), sum2.end(), K - sum1[i]) - sum2.begin();
    if (pos < sum2.size() && sum2[pos] == K - sum1[i]) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;

  return 0;
}