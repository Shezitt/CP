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
	int n, m;
	cin >> n >> m;
	vector<int> seats(n*m);
	int k = 0;
	FOR(i, 0, n-1){
		FOR(j, 0, m-1){
			seats[k] = max(i+j, max(i+m-j-1, max(n-1-i+j, n-1-i+m-j-1)));
			k++;
		}
	}
	sort(all(seats));
	for(auto i : seats)
		if(i)
			cout << i << ' ';
	cout << '\n';
}

int main(){
	//fast;
	int T = 1;
	cin >> T;
	while(T--)
		solve();
}