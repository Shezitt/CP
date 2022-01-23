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
#define dbg(x) cerr << #x << ": " << x << endl;
#define raya cerr << "=================================" << endl;
#define FOR(i, x, y) for(int i=x; i<=y; ++i)
const double PI = 3.141592653589793;
const int MOD = 1e9+7;

vector<int> good;

bool isBad(int n){
	int i = 1, c = 0;
	while(i<=n){
		if(i&n){
			c++;
		}
		i = i<<1;
	}
	return c%2;
}

void pre(){
	FOR(i, 0, 1<<20){
		if(!isBad(i)){
			good.emplace_back(i);
		}
	}
}

void solve(){
	int n;
	cin >> n;
	int i = 0;
	while(n--){
		cout << good[i++] << ' '; 
	}
	cout << '\n';
}

int main(){
	pre();
	int T = 1;
	cin >> T;
	while(T--)
		solve();
}


