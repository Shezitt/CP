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

bool isOk(int a, int b, int c, int d){
	if((abs(a-c)==2 && abs(b-d)==1) or (abs(a-c)==1 && abs(b-d)==2)){
		return 1;
	}
	return 0;
}

void solve(){
	int x1, x2, y1, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	bool ok = 0;
	int ones[] = {1, -1};
	int twos[] = {2, -2};
	for(int i=0; i<=1; ++i){
		if(ok){
			break;
		}
		for(int j=0; j<=1; ++j){
			if(isOk(x1+ones[i], y1+twos[j], x2, y2)){
				ok = 1;
				break;
			}
			if(isOk(x1+twos[i], y1+ones[j], x2, y2)){
				ok = 1;
				break;
			}
		}
	}
	cout << (ok ? "Yes" : "No");

}	
 
int main(){
	int T = 1;
    //cin >> T;
    while(T--)
        solve();
}

