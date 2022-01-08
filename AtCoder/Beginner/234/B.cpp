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

double distance(int x, int x1, int y, int y1){
    int a = abs(x-x1), b = abs(y-y1);
    double ans = sqrt(a*a+b*b);
    return ans;
}

void solve(){
    int n;
    cin >> n;
    vii p;
    FOR(i, 1, n){
        int x, y;
        cin >> x >> y;
        p.pb(mp(x,y));
    }
    double ans = -INF;
    for(auto i : p)
        for(auto j : p)
            ans = max(ans, distance(i.first, j.first, i.second, j.second));
    cout << fixed << setprecision(10) << ans;
}

int main(){
    fast;
    int T = 1;
    //cin >> T;
    while(T--)
        solve();
}

