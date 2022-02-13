#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 1000000000
#define all(x) x.begin(), x.end()
#define dbg(x) cerr << #x << ": " << x  << endl;
#define FOR(i, x, y) for(int i=x; i<=y; ++i)

int main(){
	int n, m;
	cin >> n >> m;
	int ans = INF;
	if(m > 1){
		cout << "-1\n";
		return 0;
	}
	vector<int> a(n), b(n);
	FOR(i, 0, n-1){
		cin >> a[i];
	}
	FOR(i, 0, n-1){
		cin >> b[i];
	}
	FOR(i, 0, n-1){
		ans = min(ans, max(a[i], b[i]));
	}
	cout << ans << '\n';
}


