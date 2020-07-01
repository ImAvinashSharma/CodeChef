#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//code hear

	int t, a[3];
	int n = sizeof(a) / sizeof(a[0]); ;
	cin >> t;
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> a[j];
		}
		sort(a, a + n);
		cout << a[1] << "\n";
	}
	return 0;
}
