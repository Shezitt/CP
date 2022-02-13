#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define dbg(x) cerr << #x << ": " << x  << endl;
#define FOR(i, x, y) for(int i=x; i<=y; ++i)

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);	
	int n;
	cin >> n;
	vector<ll> a(n);
	vector<pair<ll,ll>> qj;
	FOR(i, 0, n-1){
		int x;
		cin >> x;
		a[i] = x;
		ll j = 1;
		while(x%2==0){
			x /= 2;
			j*=2;	
		}
		qj.emplace_back(make_pair(x, j));
	}
	/*for(auto i : qj){
		cout << "[" << i.first << ", " << i.second << "], ";
	}*/
	set<pair<ll,ll>> Q;
	ll aux = 0;
	FOR(i, 0, n-1){
		Q.insert(make_pair(qj[i].second+aux, qj[i].first));
		aux += qj[i].second;
	}
	/*cerr << "\n===================================\n";
	for(auto x : Q){
		cout << "[" << x.first << ", " << x.second << "], ";
	}
	cerr << "\n===================================\n";*/
	int q;
	cin >> q;
	ll x;
	while(q--){
		cin >> x;
		cout << (*Q.lower_bound(make_pair(x, 0))).second << '\n';
		/*ll i = 0;
		FOR(j, 0, n-1){
			i += qj[j].second;
			if(i >= x){
				cout << qj[j].first << '\n';
				break;
			}
		}*/
	}	
}
