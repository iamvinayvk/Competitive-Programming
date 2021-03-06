/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/9/2020 2:48:31 PM
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



int main(){
	
		fast
		w(t)
		{
			ll n,m;
			cin>>n>>m;
			int cost[n][m];
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<m;j++)
				{
					cin>>cost[i][j];
				}
			}
			char str[n][m];
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<m;j++)
				{
					cin>>str[i][j];
				}
			}
			int dp[n+1][m+1];
			for(int i=0;i<m+1;i++)
				dp[n][i]=INT_MAX;
			for(int i=0;i<n+1;i++)
				dp[i][m]=INT_MAX;
			dp[n-1][m]=dp[n][m-1]=0;
			string s[n+1][m+1];
			for(int i=0;i<=n;i++)
				for(int j=0;j<=m;j++)
					s[i][j]="";
			for(int i=n-1;i>=0;i--)
			{
				for(int j=m-1;j>=0;j--)
				{
					if((dp[i+1][j]!=dp[i][j+1])||(dp[i+1][j]==0&&dp[i][j+1]==0))
					{
						if(dp[i+1][j]<dp[i][j+1])
						s[i][j]=str[i][j]+(s[i+1][j]);
						else
							s[i][j]=str[i][j]+s[i][j+1];
					}
					else
					{
						s[i][j]=str[i][j]+min(s[i+1][j],s[i][j+1]);
					}
					dp[i][j]=cost[i][j]+(min(dp[i+1][j],dp[i][j+1]));

				
				}
			}
			cout<<dp[0][0]<<"\n";
			cout<<s[0][0]<<"\n";
		}


	return 0;
}



