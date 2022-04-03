// https://atcoder.jp/contests/abc246/editorial/3720
#include <bits/stdc++.h>
using namespace std;
// 排他的論理和を用いる
int main() {
    vector<int> x(3), y(3);
    cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2];
    cout << (x[0] ^ x[1] ^ x[2]) << " " << (y[0] ^ y[1] ^ y[2]) << endl;
    return 0;
}