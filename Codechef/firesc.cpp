/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/16/2020 1:26:14 AM
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

void dfs(vector<vector<ll>>& graph,vector<ll>& visited,ll i,ll& cc_size)
{
	visited[i]=1;
	cc_size++;
	for(auto child:graph[i])
	{
		if(visited[child]==0)
			dfs(graph,visited,child,cc_size);
	}
}

int main(){
	
		fast
		w(t)
		{
			ll n,m;
			cin>>n>>m;
			vector<vector<ll>> graph(n+1);
			for(ll i=0;i<m;i++)
			{
				ll u,v;
				cin>>u>>v;
				graph[u].push_back(v);
				graph[v].push_back(u);
			}
			vector<ll> visited(n+1,0);
			ll c=0,res=1;
			for(ll i=1;i<=n;i++)
			{
				if(visited[i]==0)
				{
					ll cc_size=0;
					dfs(graph,visited,i,cc_size);
					c++;
					res=((res%mod)*(cc_size%mod))%mod;
				}

			}
			cout<<c<<" "<<res<<"\n";
		}


	return 0;
}



