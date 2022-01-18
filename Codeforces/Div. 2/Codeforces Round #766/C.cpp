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
#define dbg(x) cerr << #x << ": " << x << endl;
#define raya cerr << "=================================" << endl;
#define FOR(i, x, y) for(int i=x; i<=y; ++i)
const double PI = 3.141592653589793;
const int MOD = 1e9+7;

void dfs(int src, vector<vector<int>>& graph, vector<bool>& visited, map<pair<int,int>,int>& ans, bool flag = 0){
	visited[src] = 1;
	for(int i : graph[src]){
		if(!visited[i]){
			ans[{src,i}] = flag?2:3;
			dfs(i, graph, visited, ans, !flag);
		}
	}
}

void solve(){
	int n, u, v;
	cin >> n;
	vector<vector<int>> graph(n+1);
	vector<pair<int,int>> order;
	bool ok = 1;
	FOR(i, 2, n){
		cin >> u >> v;
		graph[u].pb(v);
		graph[v].pb(u);
		if(graph[u].size() > 2 || graph[v].size() > 2){
			ok = 0;
		}
		order.pb({u,v});
	}
	int leaf;
	FOR(i, 1, n){
		if(graph[i].size() == 1){
			leaf = i;
		}
	}
	if(ok){
		vector<bool> visited(n+1);
		map<pair<int,int>,int> ans;
		dfs(leaf, graph, visited, ans);
		for(auto i : order){
			if(ans[i]>0){
				cout << ans[i] << ' ';
			} else {
				cout << ans[{i.second,i.first}] << ' ';
			}
		}
		cout << '\n';
	} else {
		cout << -1 << '\n';
	}
}

int main(){
	fast;
	int T = 1;
	cin >> T;
	while(T--)
		solve();
}

