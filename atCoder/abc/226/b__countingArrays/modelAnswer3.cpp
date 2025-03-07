#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  cin.ignore(); // 改行まで読み込み
  set<string> st;
  rep(i, n) {
    string s;
    getline(cin, s);
    st.insert(s);
  }
  cout << st.size() << endl;
  return 0;
}