#include <bits/stdc++.h>

using namespace std;

bool isPrime(int num) {
	bool flag = false;
	for (int i = 2; i < num / 2; i++) {
		if (num % i == 0) {
			flag = true;
			break;
		}
	}
	return flag;
}
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
		if (num == 1)
			cout << "no\n";
		else if (!isPrime(num))
			cout << "yes\n";
		else
			cout << "no\n";
	}
	return 0;
}
