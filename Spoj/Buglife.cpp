/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 11/23/2020 3:02:51 PM
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

int dfs(vector<vector<int>>& graph,vector<int>& visited,vector<int>& diff,int v,int c)
{
	visited[v]=1;
	diff[v]=c;
	for(auto child:graph[v])
	{
		if(!visited[child])
		{
			if(dfs(graph,visited,diff,child,c^1)==0)
				return 0;
		}
		else if(diff[v]==diff[child])
			return 0;
	}
	return 1;
}


int main(){
	
		fast
		int t;
		cin>>t;
		int k=1;
		while(k<=t)
		{
			ll n,m;
			cin>>n>>m;
			vector<vector<int>> graph(n+1);
			for(int i=0;i<m;i++)
			{
				int u,v;
				cin>>u>>v;
				graph[u].push_back(v);
				graph[v].push_back(u);

			}
			vector<int> visited(n+1),diff(n+1);
			// cout<<"chal raha h\n";
			int ans=dfs(graph,visited,diff,1,0);
			for(int i=1;i<=n;i++)
			{
				if(!visited[i])
				{
					ans=min(dfs(graph,visited,diff,i,0),ans);
				}
			}
			if(ans)
			{
				cout<<"Scenario #"<<k<<":\nNo suspicious bugs found!\n";

			}
			else
			{
				cout<<"Scenario #"<<k<<":\nSuspicious bugs found!\n";
			}
			k++;
		}


	return 0;
}



