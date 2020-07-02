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

	int num;
	cin >> num;
	if (num % 4 == 0) {
		num++;
	}
	else {
		num--;
	}
	cout << num;
	return 0;
}
