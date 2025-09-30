#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int &i : a) cin >> i;
	vector<int> p(n);
	iota(p.begin(), p.end(), 1);

	do {
		bool ok = true;
		for (int i = 0; i < n; i++) {
			ok &= a[i] == -1 || p[i] == a[i];
		}
		if (ok) {
			cout << "Yes" << endl;
			for (int i = 0; i < n; i++) {
				cout << p[i] << " \n"[i + 1 == n];
			}
			return 0;
		}
	} while (next_permutation(p.begin(), p.end()));
	cout << "No" << endl;
	return 0;
}
