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

int ans(int row, int col){
    if(row == 1 || col == 1)
        return max(row, col);
    if(row == 2 || col == 2){
        int c = (max(row, col)/4)*4;
        if(max(row, col)%4 == 1)
            c += 2;
        else if(max(row, col)%4 > 1)
            c += 4;
        return c;
    }
    return  (row*col+1)/2;
}

void solve(){
    int row, col;
    cin >> row >> col;
    while(row && col){
        cout << ans(row, col) << " knights may be placed on a " << row << " row " << col << " column board.\n";
        cin >> row >> col;
    }
}

int main(){
    fast;
    int T = 1;
    //cin >> T;
    while(T--)
        solve();
}

