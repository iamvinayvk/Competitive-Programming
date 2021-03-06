/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/25/2020 3:04:00 PM
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
vector<int> visited(1e5+1),low(1e5+1),tin(1e5+1);
set<int> ans;
int t=0;

void dfs(int v,int par)
{
	visited[v]=1;
	low[v]=tin[v]=++t;
	int child=0;
	for(auto to:g[v])
	{
		if(to==par)
			continue;
		if(visited[to])
		{
			low[v]=min(low[v],tin[to]);

		}
		else
		{
			dfs(to,v);
			low[v]=min(low[v],low[to]);
			if(low[to]>=tin[v]&&par!=-1)
				ans.insert(v);
			child++;
		}
	}
	if(child>1&&par==-1)
		ans.insert(v);
}

int main(){
	
		fast
		while(1)
		{
			int n,m;
			cin>>n>>m;
			if(n==0||m==0)
				break;
			for(int i=0;i<m;i++)
			{
				int u,v;
				cin>>u>>v;
				g[u].push_back(v);
				g[v].push_back(u);
			}
			dfs(1,-1);
			cout<<ans.size()<<"\n";
			
			for(int i=0;i<1e5;i++)
			{
				g[i].clear();
				visited[i]=0;
				low[i]=0;
				tin[i]=0;
			}
			t=0;
			ans.clear();


		}


	return 0;
}



