/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 1/1/2021 2:53:35 PM
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
vector<string> ar(10001);
vector<vector<int>> vis(10001,vector<int>(10001,0));
ll n,m;
bool isValid(int i,int j)
{
	if(i<1||j<0||j>=m||i>n)
		return false;
	if(vis[i][j]==1||ar[i][j]=='#')
		return false;
	return true;
}
void dfs(int x,int y)
{
	vis[x][y]=1;
	if(isValid(x+1,y))
		dfs(x+1,y);
	if(isValid(x,y+1))
		dfs(x,y+1);
	if(isValid(x-1,y))
		dfs(x-1,y);
	if(isValid(x,y-1))
		dfs(x,y-1);
}

int main(){
	
		fast
		
		cin>>n>>m;
	
		for(int i=1;i<=n;i++)
		{
			
				cin>>ar[i];
		
		}
		ll cc=0;
		for(ll i=1;i<=n;i++)
		{
			for(ll j=0;j<m;j++)
			{
				if(ar[i][j]=='.'&&vis[i][j]==0)
				{

				cc++;
				dfs(i,j);
				}
			}
		}
		cout<<cc;



	return 0;
}



