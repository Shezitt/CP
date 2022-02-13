#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define dbg(x) cerr << #x << ": " << x  << endl;
#define FOR(i, x, y) for(int i=x; i<=y; ++i)

int main(){
	int n, k;
	cin >> n >> k;
	vector<pair<int,int>> state;
	FOR(i, 1, n){
		int a, b;
		cin >> a >> b;
		state.emplace_back(make_pair(a,b));
	}
	sort(all(state));
	int ans = 0;
	int i = 0;
	while(k--){
		ans += state[i++].first;
	}
	cout << ans << '\n';
}


