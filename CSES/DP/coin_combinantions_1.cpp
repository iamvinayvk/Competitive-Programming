/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/18/2020 12:18:32 AM
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
		vll dp(x+1,0),coins(n);
		REP(i,n)
		cin>>coins[i];
		dp[0]=1;
		FOR(i,1,x+1)
		{
			REP(j,n)
			if(coins[j]<=i) dp[i]+=(dp[i-coins[j]]%mod),dp[i]%=mod;
		}
		cout<<dp[x];




	return 0;
}



