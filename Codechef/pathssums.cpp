/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 11/22/2020 8:18:09 PM
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

void dfs(vector<vector<int>>& adj,vector<int>& visited,int v,vector<int>& values,int previous)
{
	visited[v]=1;
	if(values[previous]==0||values[previous]==1)
		values[v]=2;
	else
		values[v]=1;
	previous=v;
	for(auto child:adj[v])
	{
		if(!visited[child])
		{
			dfs(adj,visited,child,values,previous);
		}
	}
}

int main(){
	
		fast
		w(t)
		{
			ll n;
			cin>>n;
			vector<vector<int>> adj(n+1);
			for(int i=0;i<n-1;i++)
			{
				int u,v;
				cin>>u>>v;
				adj[u].push_back(v);
				adj[v].push_back(u);
			}
			vector<int> visited(n+1),values(n+1);
			dfs(adj,visited,1,values,0);
			for(int i=1;i<=n;i++)
				cout<<values[i]<<" ";
			cout<<"\n";

		}


	return 0;
}



