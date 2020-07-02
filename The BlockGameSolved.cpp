#include <bits/stdc++.h>

using namespace std;
int rev(int num) {
	int sum = 0;
	while (num > 0) {
		sum = sum * 10 + num % 10;
		num = num / 10;
	}	
	return sum;
}
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
		if (rev(num) == num)
			cout << "wins\n";
		else
			cout << "loses\n";
	}
	return 0;
}
