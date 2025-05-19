#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
uniform_int_distribution<int> dist(1, 10);
#define ll long long
#define ld long double
#define gcd(a, b) __gcd(a, b)
#define lcm(a,b) a/gcd(a,b)*b
#define pb push_back
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<pair<int,int>>
#define F first
#define S second
#define sz(x) (int)x.size()
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define fore(a, b, c) for(int a=b; a<c; ++a)
#define all(x) x.begin(), x.end()
#define int ll
#define endl '\n';
template <typename T>
using ordered_set = tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#define dbg(x...) cerr << "[" << #x << "] = ["; _print(x)
#define raya cerr << "==========================" << endl;
const double EPS = 1e-7;
const double PI = acos(-1);
const int MOD = 1e9+7;  
int TC = 0;

void solve(){
    string p, s;
    cin >> p;
    cin >> s;

    vector<pair<int,char>> inp, ins;

    // inp
    char aux = '$';
    int cnt = 0;
    for (int i=0; i<sz(p); ++i) {
        if (aux == p[i]) {
            cnt++;
        } else {
            if (aux == '$') {
                aux = p[i];
                cnt = 1;
            } else {
                inp.pb({cnt, p[i]});
                
                aux = p[i];
                cnt = 1;
            }
        }
    }
    inp.pb({cnt, p.back()});

    // ins
    aux = '$';
    cnt = 0;
    for (int i=0; i<sz(s); ++i) {
        if (aux == s[i]) {
            cnt++;
        } else {
            if (aux == '$') {
                aux = s[i];
                cnt = 1;
            } else {
                ins.pb({cnt, s[i]});
                
                aux = s[i];
                cnt = 1;
            }
        }
    }
    ins.pb({cnt, s.back()});

    if (sz(inp) != sz(ins)) {
        cout << "NO" << endl;
        return;
    }

    for (int i=0; i<sz(inp); ++i) {
        if (inp[i].second == ins[i].second && 2*inp[i].first >= ins[i].first && inp[i].first <= ins[i].first) {
            continue;
        }
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;

}
    
signed main(){
    fast;
    int tt = 1;
    cin >> tt;
    while(tt--){
        TC++;
        solve();
    }
}
