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
	int n, m, r, c;
	cin >> n >> m >> r >> c;
	vector<bool> rows(n), cols(m);
	vector<vector<bool>> grid(n, vector<bool>(m));
	bool ok = 0;
	--r;
	--c;
	FOR(i, 0, n-1){
		FOR(j, 0, m-1){
			char c;
			cin >> c;
			if(c == 'B'){
				grid[i][j] = 1;
				ok = 1;
				cols[j] = 1;
				rows[i] = 1;
			}
		}
	}
	if(!ok){
		cout << -1 << '\n';
	} else {
		if(grid[r][c])
			cout << 0 << '\n';
		else if(rows[r] || cols[c])
			cout << 1 << '\n';
		else
			cout << 2 << '\n';	
	}
}

int main(){
	int T = 1;
	cin >> T;
	while(T--)
		solve();
}
