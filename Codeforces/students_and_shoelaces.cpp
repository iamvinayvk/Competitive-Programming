/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 2/28/2021 1:01:50 AM
  *
  */

#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007
#define all(x) x.begin(),x.end()
#define F first
#define S second
#define vi vector<int> 
#define vll vector<long long>
#define FOR(start,end,increment) for(ll i=start;i<end;i+=increment)

ll gcd(ll a, ll b)
{
	if(a==0)
		return b;
	return gcd(b%a,a);
}



int main(){
	
		fast
		ll n,m;
		cin>>n>>m;
		vector<vector<int>> g(n+1);
		for(ll i=0;i<m;i++)
		{
			ll a,b;
			cin>>a>>b;
			g[a].push_back(b);
			g[b].push_back(a);
		}
		ll ans=0;
		ll s=1;
		while(s==1)
		{
			s=0;
			vector<pair<ll,ll>> p;
			for(ll i=1;i<=n;i++)
			{
				if(g[i].size()==1)
				{
					p.push_back(make_pair(i,g[i][0]));
				}
			}
			for(ll i=0;i<p.size();i++)
			{
				ll u=p[i].F;
				ll v=p[i].S;
				
					s=1;
					   for (int j = 0; j< g[u].size(); j++) {
        				if (g[u][j] == v) {
            				g[u].erase(g[u].begin() + j);
            				break;
        }
    }
		for (int j = 0; j< g[v].size(); j++) {
        if (g[v][j] == u) {
            g[v].erase(g[v].begin() + j);
            break;
        }
    }


				
			}
			if(s==1)
				ans++;
		}
		cout<<ans;	


	return 0;
}



