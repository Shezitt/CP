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
    string s, ans;
    cin >> s;
    map<char, int> map;
    for(char c : s)
        map[c]++;
    if(map['R'] && map['L'] && map['D'] && map['U']){
        char a, b;
        FOR(i, 1, 2){
            if(i == 1)
                a = 'U', b = 'D';
            else
                a = 'R', b = 'L';
            if(map[a] != map[b]){
                if(map[a] < map[b])
                    swap(a, b);
                map[a] -= map[a] - map[b];
            }
        }
        char c[] = {'R', 'D', 'L', 'U'};
        for(char x : c)
            FOR(i, 1, map[x])
                ans.pb(x);
    } else {
        if(map['R'] && map['L'])
            ans = "LR";
        else if(map['U'] && map['D'])
            ans = "UD";
    }
    cout << ans.size() << '\n' << ans << '\n';
}

int main(){
    fast;
    int T = 1;
    cin >> T;
    while(T--)
        solve();
}

