#include <iostream>
using namespace std;

int N, Q;
int X[100009], Y[100009];
int A[100009], B[100009], C[100009], D[100009];
int Z[1509][1509];

int main() {
  cin >> N;
  for (int i = 1; i <= N; i++) cin >> X[i] >> Y[i];
  cin >> Q;
  for (int i = 1; i <= Q; i++) cin >> A[i] >> B[i] >> C[i] >> D[i];

  for (int x = 0; x <= 1500; x++) {
    for (int y = 0; y <= 1500; y++) Z[y][x] = 0;
  }

  for (int i = 1; i <= N; i++) {
    Z[Y[i]][X[i]] += 1;
  }

  for (int x = 1; x <= 1500; x++) {
    for (int y = 1; y <= 1500; y++) Z[y][x] = Z[y][x - 1] + Z[y][x];
  }
  for (int x = 1; x <= 1500; x++) {
    for (int y = 1; y <= 1500; y++) Z[y][x] = Z[y - 1][x] + Z[y][x];
  }

  for (int i = 1; i <= Q; i++) {
    cout << Z[D[i]][C[i]] + Z[B[i] - 1][A[i] - 1] - Z[D[i]][A[i] - 1] - Z[B[i] - 1][C[i]] << endl;
  }

  return 0;
}