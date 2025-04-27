#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vi = vector<int>;

/** 二分探索 */
int custom_upper_bound(const vi& A, int start, int end, int value) {
    int low = start, high = end;
    while (low < high) {
        int mid = (low + high) / 2;
        if (A[mid] <= value) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    return low;
}

int main() {
    int n;
    cin >> n;
    vi A(n);
    rep(i, n) cin >> A[i];

    ll ans = 0;
    rep(b, n) {
      int r = custom_upper_bound(A, 0, b, A[b] / 2);
      ans += r;
    }
    cout << ans << endl;
    return 0;
}
