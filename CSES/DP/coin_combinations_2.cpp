/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/18/2020 12:25:34 AM
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
#define REP(i,n) for(ll i=0;i<n;i++)
#define FOR(i,a,b) for(ll i=a;i<b;i++)

ll gcd(ll a, ll b)
{
	if(a==0)
		return b;
	return gcd(b%a,a);
}



int main(){
	
		fast
		ll n,x;
		cin>>n>>x;
		vll coins(n);
		REP(i,n) cin>>coins[i];
		vector<vector<int>> dp(n+5,vector<int>(x+5,0));
		REP(i,n+1)
		dp[i][0]=1;
		FOR(i,1,n+1)
		{
			FOR(j,1,x+1)
			{
				if(coins[i-1]<=j)
				dp[i][j]=((dp[i-1][j]%mod)+(dp[i][j-coins[i-1]]%mod))%mod;
				else
					dp[i][j]=(dp[i-1][j]%mod);
				// cout<<dp[i][j]<<" ";
			}
			// cout<<"\n";
		}
		cout<<dp[n][x];


	return 0;
}



