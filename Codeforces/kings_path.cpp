/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 3/5/2021 7:01:22 PM
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

map<pair<ll,ll>,ll> m;
map<pair<ll,ll>,int> vis;
ll x1,y1,x2,y2;
ll dx[8]={1,0,-1,0,1,-1,1,-1};
ll dc[8]={1,-1,0,1,-1,-1,0,1};
ll bound=1e9;
bool isValid(int x,int y)
{
	if(x<1||y<1||x>bound||y>bound||m[make_pair(x,y)]<=0||vis[make_pair(x,y)]>0)
		return false;
	return true;
}
int bfs(pair<ll,ll> v)
{
	queue<pair<ll,ll>> q;
	q.push(v);
	vis[v]++;
	while(!q.empty())
	{
		pair<ll,ll> curr=q.front();
		q.pop();
		for(ll i=0;i<8;i++)
		{
			ll x=curr.F+dx[i];
			ll y=curr.S+dc[i];
			if(isValid(x,y))
			{
				if(x2==x&&y2==y)
				{
					cout<<vis[curr]<<"\n";
					return 1;
				}
				q.push(make_pair(x,y));
				vis[make_pair(x,y)]=vis[curr]+1;
			}

		}
	}
	return 0;
}

int main(){
	
		fast
		
		cin>>x1>>y1>>x2>>y2;
		ll n;
		cin>>n;
		ll size=0;
		while(n--)
		{
			ll r,a,b;
			cin>>r>>a>>b;
			for(ll i=a;i<=b;i++)
				m[make_pair(r,i)]++;
		}
		
		if(bfs(make_pair(x1,y1)))
			return 0;
		else
			cout<<"-1\n";



	return 0;
}



