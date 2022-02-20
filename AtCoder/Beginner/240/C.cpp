#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef long double ld;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<bool> vb;
#define lcm(a,b) a*b/__gcd(a,b)
#define INF 1000000000 #define pb push_back #define mp make_pair #define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define dbg(x) cerr << #x << ": " << x  << endl;
#define raya cerr << "=================================" << endl;
#define FOR(i, x, y) for(int i=x; i<=y; ++i)
const double PI = 3.141592653589793;
const int MOD = 1e9+7;

const int MAX_X = 10000;
vector<bitset<MAX_X+1>> dp;

void solve(){
	int n, x;
	cin >> n >> x;
	vector<int> a;
	vector<int> b;
	for(int i=0; i<n; ++i){
		int aux;
		cin >> aux;
		a.push_back(aux);
		cin >> aux;
		b.push_back(aux);
	}
	dp.resize(n+1);
	dp[0][0] = 1;
	for(int i=0; i<n; ++i){
		for(int j=0; j<x; ++j){
			if(dp[i][j]){
				dp[i+1][j+a[i]] = 1;
				dp[i+1][j+b[i]] = 1;
			}
		}
	}
	cout << (dp[n][x] ? "Yes" : "No") << '\n';
}

int main(){
    int T = 1;
    //cin >> T;
    while(T--)
        solve();
}
