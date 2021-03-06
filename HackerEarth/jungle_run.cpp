/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 1/1/2021 11:08:47 PM
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

ll n,sX,sY,eX,eY;
char ar[31][31];
int vis[31][31];
int dis[31][31];
bool isValid(int i,int j)
{
	if(i<0||j<0||i>=n||j>=n)
		return false;
	if(vis[i][j]==1||ar[i][j]=='T')
		return false;
	return true;
}
void bfs(int x,int y)
{
	queue<pair<int,int>> q;
	q.push(make_pair(x,y));
	dis[x][y]=0;
	vis[x][y]=1;
	q.pop();
	while(!q.empty())
	{
		int X=q.front().F;
		int Y=q.front().S;
		int d=dis[X][Y];
		if(isValid(X+1,Y))
		{
			q.push(make_pair(X+1,Y));
			dis[X+1][Y]=d+1;
			vis[X+1][Y]=1;
		}
		if(isValid(X-1,Y))
		{
			q.push(make_pair(X-1,Y));
			dis[X-1][Y]=d+1;
			vis[X-1][Y]=1;
		}
		if(isValid(X,Y+1))
		{
			q.push(make_pair(X,Y+1));
			dis[X][Y+1]=d+1;
			vis[X][Y+1]=1;
		}
		if(isValid(X,Y-1))
		{
			q.push(make_pair(X,Y-1));
			dis[X][Y-1]=d+1;
			vis[X][Y-1]=1;
		}
	}
}

int main(){
	
		fast
		cin>>n;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>ar[i][j];
				if(ar[i][j]=='S')
					sX=i,sY=j;
				if(ar[i][j]=='E')
					eX=i,eY=j;
			}
		}
		for(int i=0;i<31;i++)
		{
			for(int j=0;j<31;j++)
			{
				vis[i][j]=0;
				dis[i][j]=0;
			}
		}
		bfs(sX,sY);
		cout<<dis[eX][eY];




	return 0;
}



