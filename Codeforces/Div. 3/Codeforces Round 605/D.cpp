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
const double PI = acos(-1);
const int MOD = 1e9+7;

void solve(){
    int n, ans = -1; cin >> n;
    vi a(n), l(n), r(n);
    for(auto& x : a)
        cin >> x;
    l[0] = r[n-1] = 1;
    FOR(i, 1, n-1){
        if(a[i] > a[i-1])
            l[i] = l[i-1]+1;
        else
            l[i] = 1;
        ans = max(ans, l[i]);
    }
    for(int i=n-2; i>=0; --i){
        if(a[i]<a[i+1])
            r[i] = r[i+1]+1;
        else
            r[i] = 1;
    }
    FOR(i, 0, n-3)
        if(a[i] < a[i+2])
            ans = max(ans, l[i]+r[i+2]);
    cout << ans << '\n';
}

int main(){
    fast;
    int T = 1;
    //cin >> T;
    while(T--)
        solve();
}

