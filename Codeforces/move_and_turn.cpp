/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/19/2020 3:23:23 PM
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
		ll n;
		cin>>n;
		vll dp(n+5);
		dp[1]=4;
		dp[2]=4;
		dp[3]=12;
		dp[4]=9;
		ll p=8,k=3;
		for(ll i=5;i<=n;i++)
		{
			if(i%2)
			{
				dp[i]=k*4+dp[i-2];
				k++;
			}
		
			else
				dp[i]=((i/2)+1)*(i/2+1);
		}
		cout<<dp[n]<<"\n";


	return 0;
}



