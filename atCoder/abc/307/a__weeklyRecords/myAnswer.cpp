#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)

int N, A[79];
int X[19];
int main() {
  cin >> N;
  rep(i, N * 7) cin >> A[i];
  rep(i, N * 7) {
    int x = i / 7;
    X[x] += A[i];
  }

  rep(i, N) {
    cout << X[i] << " ";
  }
  cout << endl;
  return 0;
}