// 偏角を求めて解く
#include<bits/stdc++.h>
using namespace std;
int main(){
  int x,y;
  cin >> x >> y;
  // std::atan2 算術型の逆正接（アークタンジェント）を対辺と隣辺から求める。
  double theta=atan2((double)y,(double)x);
  // sinθ = x / t, cosθ = y / t
  cout << cos(theta) << ' ' << sin(theta) << '\n';
  return 0;
}