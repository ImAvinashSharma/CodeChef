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

	int t, num, e = 0, o = 0;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> num;
		if (num % 2 == 0)
			e++;
		else
			o++;
	}
	if (e > o)
		cout << "READY FOR BATTLE\n";
	else
		cout << "NOT READY\n";
	return 0;
}
