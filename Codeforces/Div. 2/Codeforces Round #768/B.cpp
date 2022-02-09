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

int getX(vector<int> a){
	int x = 0, n = a.size();
	FOR(i, 1, n-1){
		if(a[i] != a[0]){
			break;
		}
		x = i;
	}
	return x;
}

void solve(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(auto& i : a){
		cin >> i;
	}
	reverse(all(a));
	int ans = 0;
	int x = getX(a);
	while(x < n-1){
		ans++;
		for(int i=x; i<=2*x+1 && i<n; ++i){
			a[i] = a[0];
		}
		x = getX(a);
	}
	cout << ans << '\n';
}

int main(){
    int T = 1;
    cin >> T;
    while(T--)
        solve();
}
