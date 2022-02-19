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

bool isPrime(int x){
	for(int i=2; i*i<=x; ++i){
		if(x%i==0){
			return 0;
		}
	}
	return 1;
}

void solve(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	for(int i=a; i<=b; ++i){
		bool ok = 1;
		for(int j=c; j<=d; ++j){
			if(isPrime(i+j)){
				ok = 0;
			}
		}
		if(ok){
			cout << "Takahashi";
			return;
		}
	}
	cout << "Aoki";
}	
 
int main(){
	int T = 1;
    //cin >> T;
    while(T--)
        solve();
}

