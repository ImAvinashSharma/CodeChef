#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; cin >> a[i++]);
		sort(a, a + n);
		int max = 0;
		for (int i = 1; i < n; i++) {
			int temp = abs(a[i - 1] - a[i]);
			if (temp > max)
				max = temp;
		}
		cout << max<<endl;
	}
	return 0;
}
