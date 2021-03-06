/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/16/2020 1:44:17 PM
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

void dfs(vector<vector<ll>>& gp,vector<ll>& vis,ll v,ll d,ll& maxd,ll& maxnode)
{
	vis[v]=1;
	if(d>maxd) maxd=d,maxnode=v;
	for(auto child:gp[v])
	{
		if(vis[child]==0)
			dfs(gp,vis,child,d+1,maxd,maxnode);
	}
}

int main(){
	
		fast
		ll n;
		cin>>n;
		vector<vector<ll>> gp(n+1);
		for(ll i=0;i<n-1;i++)
		{
			ll u,v;
			cin>>u>>v;
			gp[u].push_back(v);
			gp[v].push_back(u);
		}
		ll maxd=-1,maxnode=0;
		vector<ll> vis(n+1,0);
		dfs(gp,vis,1,0,maxd,maxnode);
		for(ll i=0;i<n+1;i++) vis[i]=0;
		dfs(gp,vis,maxnode,0,maxd,maxnode);
		cout<<maxd;


	return 0;
}



