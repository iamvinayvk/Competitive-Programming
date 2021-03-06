/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 3/2/2021 10:48:36 AM
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
char mat[1005][1005];
bool isV(int i,int j,int n,int m,char c)
{
	if(i<=0||j<=0||i>n||j>m||mat[i][j]=='.'||mat[i][j]==c)
		return false;
	// cout<<"inloop: "<<mat[i][j]<<"\n";
	return true;
}

int main(){
	
		fast
		ll n,m;
		char c;
		cin>>n>>m>>c;
		
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				cin>>mat[i][j];
			}
		}
		ll maxans=0;
		unordered_set<char> s;
		for(int i=1;i<=n;i++)
		{
			
			for(int j=1;j<=m;j++)
			{
				if(mat[i][j]==c)
				{
					if(isV(i+1,j,n,m,c))
					{
						s.insert(mat[i+1][j]);
						// cout<<mat[i][j]<<"\n";
					}
					if(isV(i-1,j,n,m,c))
					{
						s.insert(mat[i-1][j]);
						// cout<<mat[i][j]<<"\n";
					}
					if(isV(i,j-1,n,m,c))
					{
						s.insert(mat[i][j-1]);
						// cout<<mat[i][j]<<"\n";
					}
					if(isV(i,j+1,n,m,c))
					{
						s.insert(mat[i][j+1]);
						// cout<<mat[i][j]<<"\n";
					}
				}
			}
			maxans=max((int)s.size(),(int)maxans);
		}
		cout<<s.size()<<"\n";


	return 0;
}



