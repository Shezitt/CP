#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef long double ld;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<bool> vb;
#define lcm(a,b) a*b/__gcd(a,b)
#define INF 1000000000
#define pb push_back
#define mp make_pair
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define dbg(x) cerr << #x << ": " << x  << endl;
#define raya cerr << "=================================" << endl;
#define FOR(i, x, y) for(int i=x; i<=y; ++i)
const double PI = 3.141592653589793;
const int MOD = 1e9+7;

void solve(){
	int n, l, r, c, L = INF, R = 0, costL = INF, costR = INF, longest = 0, costLongest = INF;
	cin >> n;
	while(n--){
		cin >> l >> r >> c;
		if(l == L)
			costL = min(costL, c);
		else if(L > l)
			L = l, costL = c;
		if(r == R)
			costR = min(costR, c);
		else if(R < r)
			R = r, costR = c;
		if(longest == r-l+1)
			costLongest = min(costLongest, c);
		else if(r-l+1 > longest)
			longest = r-l+1, costLongest = c;
		int ans = costR + costL;
		if(longest == R-L+1)
			ans = min(ans, costLongest);
		cout << ans << '\n';
	}
}

int main(){
	fast;
	int T = 1;
	cin >> T;
	while(T--)
		solve();
}

