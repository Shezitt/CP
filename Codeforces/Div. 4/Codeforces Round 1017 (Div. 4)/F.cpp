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
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> tmp(k);
    iota(all(tmp), 1);

    // if (n%k == 0 && m%k == 0) {
        vector<vector<int>> a(n, vector<int>(m));

        int pos = 0;

        fore (i, 0, n) {

            if (i > 0 && tmp[pos] == a[i-1][0]) {
                pos = (pos == 0 ? 1 : 0);
            } 

            fore (j, 0, m) {
                a[i][j] = tmp[pos];
                pos = (pos+1) % k;
            }
        }

        fore (i, 0, n) {
            fore (j, 0, m) {
                cout << a[i][j] << ' ';
            }
            cout << endl;
        }
    // }
    // else {
    //     vector<vector<int>> a(n, vector<int>(m));
    //     int pos = 0;
    //     if (m%k != 0) {
    //         for (int i=0; i<n; ++i) {
    //             for (int j=0; j<m; ++j) {
    //                 a[i][j] = tmp[pos];
    //                 pos = (pos + 1) % k;
    //             }
    //         }
    //     }
    //     else {
    //         for (int j=0; j<m; ++j) {
    //             for (int i=0; i<n; ++i) {
    //                 a[i][j] = tmp[pos];
    //                 pos = (pos +1 )%k;
    //             }
    //         }
    //     }
    //     fore (i, 0, n) {
    //         fore (j, 0, m) {
    //             cout << a[i][j] << ' ';
    //         }
    //         cout << endl;
    //     }
    // }


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
