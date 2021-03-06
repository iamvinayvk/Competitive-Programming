/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 11/23/2020 4:16:25 PM
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

int dfs(vector<vector<int>>& graph,vector<int>& visited,vector<int>& biparite,int v,int c)
{
	visited[v]=1;
	biparite[v]=c;
	for(auto child:graph[v])
	{
		if(!visited[child])
		{
			if(dfs(graph,visited,biparite,child,c^1)==0)
				return 0;
		}
		else if(biparite[v]==biparite[child])
			return 0;
	}
	return 1;
}

int main(){
	
		fast
		ll n,m;
		cin>>n>>m;
		vector<vector<int>> graph(n+1);
		vector<pair<int,int>> store;
		for(int i=0;i<m;i++)
		{
			int u,v;
			cin>>u>>v;
			graph[u].push_back(v);
			graph[v].push_back(u);
			store.push_back(make_pair(u,v));
		}
		vector<int> visited(n+1),biparite(n+1);
		// vector<int> ans(m);
		int res=INT_MAX;
		for(int i=1;i<=n;i++)
		{
			if(!visited[i])
			{
				res=min(dfs(graph,visited,biparite,i,0),res);
			}
		}
		if(res)
		{
			cout<<"YES\n";
			for(int i=0;i<m;i++)
			{
				if(biparite[store[i].F]==0)
				{
					cout<<"1";
				}
				else
					cout<<"0";
				// cout<<store[i].F<<":store\n";
			}
			cout<<"\n";
		}
		else
			cout<<"NO\n";


	return 0;
}



