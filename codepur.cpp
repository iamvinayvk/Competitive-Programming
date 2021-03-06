/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/24/2020 11:06:41 PM
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

vector<vector<int>> g(1e5+1);
vector<int> visited(1e5+1),tin(1e5+1),low(1e5+1);
bool bridge=false;
int t=0;
vector<pair<int,int>> edgeList;

void dfs(int v,int parent)
{
	visited[v]=1;
	tin[v]=low[v]=++t;
	for(auto child:g[v])
	{
		if(child==parent)
			continue;
		if(visited[child])
		{
			low[v]=min(low[v],tin[child]);
		
		}
		else
		{
			dfs(child,v);
			
			if(low[child]>tin[v])
			{
				bridge=true;
				return;
			}
			else
			{
				// edgeList.push_back(make_pair(child,v));
				low[v]=min(low[v],low[child]);
			}

		}
	}

}


int main(){
	
		fast
		ll n,m;
		cin>>n>>m;
		for(int i=0;i<m;i++)
		{
			int u,v;
			cin>>u>>v;
			g[u].push_back(v);
			g[v].push_back(u);

		}
		ll cc=0;
		for(int i=1;i<=n;i++)
		{
			if(visited[i]==0)
			{
			dfs(i,-1);
			cc++;
			// cout<<"i:"<<i<<"\n";	
			}
		}
		cout<<cc<<" "<<bridge<<"\n";
		if(bridge||cc>1)
			cout<<"YES\n";
		else
		{
			cout<<"NO\n";
		}



	return 0;
}



