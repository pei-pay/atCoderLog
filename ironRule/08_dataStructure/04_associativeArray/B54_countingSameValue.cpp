#include <iostream>
#include <map>
using namespace std;

int N;
int A[100009];
map<int, int> Map;
int main() {
  cin >> N;
  for (int i = 1; i <= N; i++) cin >> A[i];

  long long Answer = 0;
  for (int i = 1; i <= N; i++) {
    Answer += Map[A[i]];
    Map[A[i]] += 1;
  }

  cout << Answer << endl;
  return 0;
}