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

	int t, num, r = 0;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> num;
		while (num > 0) {
			if (num % 10 == 4)
				r++;
			num = num / 10;
		}
		cout << r << "\n";
		r = 0;
	}
	return 0;
}
