#include <bits/stdc++.h>
#define ll long long
#define get(a) scanf("%lld", &a)
#define repVector(v)  for( typeof(v.begin()) it = v.begin(); it != v.end(); it++ )
#define repSet(s) for( typeof(s.begin()) it = s.begin(); it != s.end(); it++ )
#define all(c) c.begin(), c.end()
#define MEM(a,b) memset(a,(b),sizeof(a))
#define eb emplace_back
#define pb push_back
#define FOR(i,a,b) for( ll i = a; i <= b; i++ )
#define ROF(i,a,b) for( ll i = a; i >= b; i-- )
#define debug(x) cout << "[DEBUG] " << #x << " = " << x << endl;
#define matrix vector< vector<ll> >
#define F first
#define S second
#define mp make_pair
#define MOD 1000000007
#define INPFILE freopen("input.in","r",stdin)
using namespace std;

int main(){
	ll n,x,y = 0;
	cin >> n;
	ll m[100005] = {0},dp[100005] = {0} ;
	FOR( i,1,n ){
		cin >> x;
		m[x]++;
		y = max( y,x );
	}
	dp[1] = m[1];
	FOR( i,2,y ){
		dp[i] = max( i*m[i] + dp[i-2], dp[i-1] );  
	}
		
	//FOR( i,1,n )
	//	cout << dp[i] <<" ";
	//cout << endl;
		
	cout << dp[y];
}
		
