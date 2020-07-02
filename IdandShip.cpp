#include <bits/stdc++.h>

using namespace std;

#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define PI 3.1415926535897932384626e tr(it, a) f

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//code hear
	int i, t;
	char ch;
	cin >> t;
	fo(i, t) {
		cin >> ch;
		if (ch == 'B' || ch == 'b')
			cout << "BattleShip\n";
		else if (ch == 'c' || ch == 'C')
			cout << "Cruiser\n";
		else if (ch == 'D' || ch == 'd')
			cout << "Destroyer\n";
		else if (ch == 'F' || ch == 'f')
			cout << "Frigate\n";

	}
	return 0;
}
