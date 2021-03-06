/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 11/22/2020 1:51:03 AM
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

void dfs(vector<vector<int>>& adj,vector<int>& visited,int v)
{
	visited[v]=1;
	for(auto j:adj[v])
	{
		if(!visited[j])
			dfs(adj,visited,j);
	}
}
int main(){
	
		fast
		ll n,m;
		cin>>n>>m;
		vector<vector<int>> adj(n+1);
		for(int i=0;i<m;i++)
		{
			int u,v;
			cin>>u>>v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		vector<int> visited(n+1);
		// dfs(adj,visited,1);
		int count=0;
		for(int i=1;i<n;i++)
		{
			if(!visited[i])
			{
				dfs(adj,visited,i);
				count++;
			}
		}
		if(count==1&&n==m+1)
			cout<<"YES\n";
		else
			cout<<"NO\n";




	return 0;
}



