/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/17/2020 10:58:01 PM
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
		ll n,x;
		cin>>n>>x;
		vll dp(x+1,INT_MAX);
		vll coins(n);
		for(int i=0;i<n;i++)
			cin>>coins[i];
		dp[0]=0;
		for(ll i=1;i<=x;i++)
		{
			for(ll j=0;j<n;j++)
			{
				if(coins[j]<=i)
				dp[i]=min(dp[i-coins[j]]+1,dp[i]);
			}
		}
		if(dp[x]!=INT_MAX)
		cout<<dp[x];
	else
		cout<<"-1";


	return 0;
}



