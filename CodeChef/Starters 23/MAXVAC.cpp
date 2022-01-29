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
	int n, x;
	string s;
	cin >> n >> x >> s;
	int ans = 0, aux = 0;
	for(char c : s){
		if(c == '1'){
			ans += aux/x;
			aux = 0;
		} else {
			aux++;
		}
	}
	ans += aux/x;
	vector<int> left(n), right(n);
	left[0] = (s[0] == '1' ? 0 : 1);
	FOR(i, 1, n-1){
		if(s[i] == '1'){
			left[i] = 0;
		} else {
			left[i] = left[i-1] + (s[i] == '1' ? 0 : 1);
		}
	}
	right[n-1] = (s[n-1] == '1' ? 0 : 1);
	for(int i=n-2; i>=0; --i){
		if(s[i] == '1'){
			right[i] = 0;
		} else {
			right[i] = right[i+1] + (s[i] == '1' ? 0 : 1);
		}
	}
	int mxAns = ans;
	FOR(i, 0, n-1){
		if(i>0 && s[i] == '1'){
			mxAns = max(mxAns, ans - left[i-1]/x - right[(i<n-1 ? i+1 : i)]/x + (left[i-1]+right[(i<n-1 ? i+1 : i)]+1)/x);
		}
	}
	cout << mxAns << '\n';
}

int main(){
    int T = 1;
    cin >> T;
    while(T--)
        solve();
}
