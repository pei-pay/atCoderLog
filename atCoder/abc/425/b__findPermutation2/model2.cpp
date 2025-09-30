#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    set<int> used;
    bool ok = true;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] != -1) {
            if (used.count(a[i])) ok = false;
            used.insert(a[i]);
        }
    }
    if (!ok) {
        cout << "No" << endl;
        return 0;
    }
    vector<int> remain;
    for (int i = 1; i <= n; i++) {
        if (!used.count(i)) remain.push_back(i);
    }
    int idx = 0;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        if (a[i] == -1) {
            p[i] = remain[idx++];
        }
        else {
            p[i] = a[i];
        }
    }
    cout << "Yes" << endl;
    for (int i = 0; i < n; i++) {
        cout << p[i] << " \n"[i + 1 == n];
    }
    return 0;
}
