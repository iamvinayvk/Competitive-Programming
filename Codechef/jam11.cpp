/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/3/2020 11:30:16 PM
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
			ll n;
			cin>>n;
			ll dp[100005];
			for(int i=0;i<100005;i++)
				dp[i]=0;
			dp[1]=1;
			dp[2]=2;
			dp[3]=4;
			for(int i=4;i<=n;i++)
				dp[i]=(dp[i-1]+dp[i-2]+dp[i-3])%mod;
			cout<<dp[n]<<"\n";
		}


	return 0;
}



