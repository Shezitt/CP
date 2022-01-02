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

int diff(int a, int b, int c){
    return abs(a-b) + abs(a-c) + abs(b-c);
}

void solve(){
    int f[3], ans = INF;
    FOR(i, 0, 2)
        cin >> f[i];
    ans = diff(f[0], f[1], f[2]);
    for(int i=-1; i<=1; ++i)
        for(int j=-1; j<=1; ++j)
            for(int k=-1; k<=1; ++k)
                ans = min(ans, diff(f[0]+i, f[1]+j, f[2]+k));
    cout << ans << '\n';
}

int main(){
    int T = 1;
    cin >> T;
    while(T--)
        solve();
}

