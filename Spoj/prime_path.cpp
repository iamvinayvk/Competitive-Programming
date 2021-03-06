/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/18/2020 1:48:12 PM
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

bool isPrime(int n)
{
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		return false;

	}
	return true;
}
bool isValid(int a, int b)
{
	int cnt=0;
	while(a>0)
	{
		if((a%10)!=(b%10)) cnt++;
		a/=10;
		b/=10;
	}
	if(cnt==1)
		return true;
	return false;
}
void BFS(vector<vector<int>>& gp,vector<int>& vis,vector<int>& dis,int v)
{
	vis[v]=1;
	dis[v]=0;
	queue<int> q;
	q.push(v);
	while(!q.empty())
	{
		int curr=q.front();
		q.pop();
		{
			for(auto child:gp[curr])
			{
				if(vis[child]==0)
				{
					vis[child]=1;
					dis[child]=dis[curr]+1;
					q.push(child);
				}
			}
		}
	}
}
int main(){
	
		fast
		w(t)
		{
			vector<int> primes;
			for(int i=1000;i<=9999;i++)
			{
				if(isPrime(i))
					primes.push_back(i);
			}
			vector<vector<int>> gp(10000);
			for(int i=0;i<primes.size();i++)
			{
				for(int j=i+1;j<primes.size();j++)
				{
					int a=primes[i];
					int b=primes[j];
					if(isValid(a,b))
					{
						gp[a].push_back(b);
						gp[b].push_back(a);
					}
				}
			}
			int a,b;
			cin>>a>>b;
			vector<int> vis(10000,0),dis(10000,-1);
			BFS(gp,vis,dis,a);
			if(dis[b]==-1)
				cout<<"Impossible\n";
			else
				cout<<dis[b]<<"\n";
		}


	return 0;
}



