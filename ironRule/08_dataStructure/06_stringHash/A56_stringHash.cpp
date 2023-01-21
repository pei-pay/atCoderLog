#include <iostream>
using namespace std;


// 入力で与えられる変数
long long N, Q;
string S;
long long a[200009], b[200009], c[200009], d[200009];

// ハッシュ値を計算するための変数
long long mod = 2147483647;
long long T[200009], H[200009];
long long Power100[200009];

// S[l, r] のハッシュ値を返す関数
long long Hash_value(int l, int r) {
  long long val = H[r] - (H[l - 1] * Power100[r - l + 1] % mod);
  if (val < 0) val += mod;
  return val;
}

int main() {
  // 入力
  cin >> N >> Q;
  cin >> S;
  for (int i = 1; i <= Q; i++) cin >> a[i] >> b[i] >> c[i] >> d[i];

  /**
   * 文字を数値に変換
   *
   * eg) a = 1, b = 2, c = 3 のようにする
   *
   * 'a' - 'a' = 0
   * 'b' - 'a' = 1
   * 'c' - 'a' = 2
   *
   * aを0ではなく、1にしたいので、最後に+1する
   */
  for (int i = 1; i <= N; i++) T[i] = (S[i - 1] - 'a') + 1;

  // 100のn乗を前計算する
  Power100[0] = 1;
  for (int i = 1; i <= N; i++) Power100[i] = 100LL * Power100[i - 1] % mod;

  // H[i],....,H[N] を計算する
  H[0] = 0;
  for (int i = 1; i <= N; i++) H[i] = (100LL * H[i - 1] + T[i]) % mod;

  // クエリに答える
  for (int i = 1; i <= Q; i++) {
    long long Hash1 = Hash_value(a[i], b[i]);
    long long Hash2 = Hash_value(c[i], d[i]);

    if (Hash1 == Hash2) cout << "Yes" << endl;
    else cout << "No" << endl;
  }

  return 0;
}