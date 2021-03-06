/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 1/2/2021 11:27:46 PM
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
vector<ll> dp(1000001,-1);
ll mino(ll n)
{
	if(n<=0)
		return 0;
	if(dp[n]!=-1)
		return dp[n];
	return dp[n]=min(mino(n-1),min(mino(n-2),min(mino(n-3),min(mino(n-4),mino(n-5)))))+1;
}

int main(){
		ll n;
		fast
		cin>>n;
		mino(n);
		cout<<dp[n]<<"\n";


	return 0;
}



