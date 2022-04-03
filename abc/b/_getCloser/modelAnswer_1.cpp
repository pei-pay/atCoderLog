// https://atcoder.jp/contests/abc246/editorial/3700
//  2点間の距離を利用して解く
#include<bits/stdc++.h>
using namespace std;
int main(){
  int x,y;
  cin >> x >> y;
  int d2=x*x+y*y;
  double d=d2;
  // std:sqrt 平方根(square root)を求める
  d=sqrt(d);
  double dx=x,dy=y;
  cout << dx/d << ' ' << dy/d << '\n';
  return 0;
}