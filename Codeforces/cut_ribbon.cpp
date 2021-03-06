/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/4/2020 2:34:38 PM
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
		ll n,a,b,c;
		cin>>n>>a>>b>>c;

		vector<int> dp(1e6,0);

		for(int i=1;i<=n;i++)
		{
			int ans=-1;
			if(a<=i)
				ans=max(ans,dp[i-a]);
			if(b<=i)
				ans=max(ans,dp[i-b]);
			if(c<=i)
				ans=max(ans,dp[i-c]);
			if(ans!=-1)
			dp[i]=ans+1;
			else
				dp[i]=-1;
		// cout<<dp[i]<<"\n";

		}
		cout<<dp[n];
		
		


	return 0;
}



