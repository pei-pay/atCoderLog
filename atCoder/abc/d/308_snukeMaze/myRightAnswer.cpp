#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)

int h, w;
string snuke = "snuke";

bool isValidMove(vector<string>& s, vector<vector<bool>>& checked, int x, int y, int cur) {
  if (x <= -1 || x >= w || y <= -1 || y >= h) {
    return false;
  }
  if (s[y][x] != snuke[cur]) {
    return false;
  }
  if (checked[y][x]) {
    return false;
  }
  return true;
}

bool reachable(vector<string>& s, vector<vector<bool>>& checked, int x, int y, int cur) {
  if (x == w - 1 && y == h - 1) {
    if (s[y][x] == snuke[cur]) {
      return true;
    }
    else {
      return false;
    }
  }

  checked[y][x] = true;


  bool result = false;
  cur += 1;

  if (isValidMove(s, checked, x, y - 1, cur % 5) && reachable(s, checked, x, y - 1, cur % 5)) {
    result = true;
  }
  if (isValidMove(s, checked, x, y + 1, cur % 5) && reachable(s, checked, x, y + 1, cur % 5)) {
    result = true;
  }
  if (isValidMove(s, checked, x - 1, y, cur % 5) && reachable(s, checked, x - 1, y, cur % 5)) {
    result = true;
  }
  if (isValidMove(s, checked, x + 1, y, cur % 5) && reachable(s, checked, x + 1, y, cur % 5)) {
    result = true;
  }

  return result;
}

int main() {
  cin >> h >> w;
  vector<string> s(h);
  rep(i, h) {
    cin >> s[i];
  }

  vector<vector<bool>> checked(h, vector<bool>(w, false));

  int cur = 0;
  if (s[0][0] != snuke[cur]) {
    cout << "No" << endl;
    return 0;
  }

  if (reachable(s, checked, 0, 0, cur)) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }

  return 0;
}