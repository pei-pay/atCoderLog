#include <iostream>
#include <stack>
using namespace std;


int Q;
int QueryType[100009];
string x[100009];
stack<string> S;

int main() {
  cin >> Q;
  for (int i = 1; i <= Q; i++) {
    cin >> QueryType[i];
    if (QueryType[i] == 1) cin >> x[i];
  }

  for (int i = 1; i <= Q; i++) {
    if (QueryType[i] == 1) S.push(x[i]);
    if (QueryType[i] == 2) cout << S.top() << endl;
    if (QueryType[i] == 3) S.top();
  }
  return 0;
}