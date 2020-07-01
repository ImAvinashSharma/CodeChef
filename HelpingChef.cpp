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

	int t, num;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> num;
		if (num < 10)
			cout << "Thanks for helping Chef!" << "\n";
		else
			cout << -1 << "\n";
	}
	return 0;
}
