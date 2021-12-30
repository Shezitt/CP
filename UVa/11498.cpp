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
    int q, m, n, x, y;
    string ans;
    while(1){
        cin >> q;
        if(q == 0)
            return;
        cin >> m >> n;
        while(q--){
            cin >> x >> y;
            if(x == m || y == n)
                ans = "divisa";
            else if(x < m && y > n)
                ans = "NO";
            else if(x > m && y > n)
                ans = "NE";
            else if(x > m && y < n)
                ans = "SE";
            else 
                ans = "SO";
            cout << ans << '\n';
        }
    }
}

int main(){
    int T = 1;
    //cin >> T;
    while(T--)
        solve();
}

