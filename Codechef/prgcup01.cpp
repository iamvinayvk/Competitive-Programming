/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 1/4/2021 2:23:22 PM
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
int board[10][10];
int vis[10][10],dis[10][10];
int dx[8] = { 2, 1, -1, -2, -2, -1, 1, 2 }; 
int dy[8] = { 1, 2, 2, 1, -1, -2, -2, -1 }; 
bool isValid(int x,int y)
{
	if(x<0||y<0||x>=8||y>=8||vis[x][y]==1)
		return false;
	return true;
}
void bfs(int X,int Y)
{
	queue<pair<int,int>> q;
	q.push(make_pair(X,Y));
	dis[X][Y]=0;
	vis[X][Y]=1;
	while(!q.empty())
	{
		int x=q.front().F;
		int y=q.front().S;
		q.pop();
		for(int i=0;i<8;i++)
		{
			if(isValid(x+dx[i],y+dy[i]))

			{
				dis[x+dx[i]][y+dy[i]]=dis[x][y]+1;
				vis[x+dx[i]][y+dy[i]]=1;
				q.push(make_pair(x+dx[i],y+dy[i]));
			}
		}
	}
}

int main(){
	
		fast
		w(t)
		{
			string s1,s2;
			cin>>s1>>s2;
			int sX=s1[0]-'a';
			int sY=s1[1]-'1';
			int eX=s2[0]-'a';
			int eY=s2[1]-'1';
			for(int i=0;i<10;i++)
			{
				for(int j=0;j<10;j++)
				{
					board[i][j]=0;
					vis[i][j]=0;
					dis[i][j]=0;
				}
			}
			bfs(sX,sY);
			cout<<dis[eX][eY]<<"\n";
		}


	return 0;
}



