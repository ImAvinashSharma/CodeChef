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

	int t, a, b, c;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a >> b >> c;
		if (a + b + c == 180)
			cout << "YES\n" ;
		else
			cout << "NO\n";
	}
	return 0;
}
