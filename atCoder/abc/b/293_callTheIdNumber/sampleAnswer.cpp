#include <iostream>
using namespace std;

int n;
int a[200001];
bool b[200001];

int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) cin >> a[i];
  for (int i = 1; i <= n; i++) if (!b[i]) b[a[i]] = true;

  int k = 0;
  for (int i = 1; i <= n; i++) if (!b[i]) k++;
  cout << k << endl;
  for (int i = 1; i <= n; i++) if (!b[i]) cout << i << " ";
  cout << endl;
  return 0;
}