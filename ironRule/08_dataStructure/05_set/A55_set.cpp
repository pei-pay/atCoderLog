#include <iostream>
#include <set>
using namespace std;

int main() {
  int Q, QueryTypes[100009], x[100009];
  cin >> Q;
  for (int i = 1; i <= Q; i++) cin >> QueryTypes[i] >> x[i];

  set<int> S;
  for (int i = 1; i <= Q; i++) {
    if (QueryTypes[i] == 1) S.insert(x[i]);
    if (QueryTypes[i] == 2) S.erase(x[i]);
    if (QueryTypes[i] == 3) {
      auto itr = S.lower_bound(x[i]);
      if (itr == S.end()) cout << "-1" << endl;
      else  cout << (*itr) << endl;
    }
  }

  return 0;
}