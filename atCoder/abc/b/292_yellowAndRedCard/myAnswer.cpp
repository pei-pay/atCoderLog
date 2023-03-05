#include <iostream>
using namespace std;

int N, Q;
int n[110];
int x[110], y[110];
int main() {
  cin >> N >> Q;

  for (int i = 1; i <= Q; i++) {
    cin >> x[i] >> y[i];
  }

  for (int i = 1; i <= Q; i++) n[i] = 0;

  for (int i = 1; i <= Q; i++) {
    if (x[i] == 1) {
      n[y[i]] += 1;
    }
    else if (x[i] == 2) {
      n[y[i]] = 2;
    }
    else {
      if (n[y[i]] == 2) {
        cout << "Yes" << endl;
      }
      else {
        cout << "No" << endl;
      }
    }
  }

  return 0;
}