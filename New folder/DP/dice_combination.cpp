/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/11/2020 10:53:22 PM
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
		ll dp[n+5];
		ll dices[6]={1,2,3,4,5,6};
		for(int i=0;i<n+5;i++)
			dp[i]=0;
		dp[0]=1;
		dp[1]=1;
		dp[2]=2;
		for(int i=3;i<=n;i++)
		{
			for(int j=0;j<6;j++)
			{
				if(dices[j]<=i)
				{
					dp[i]=((dp[i]%mod)+(dp[i-dices[j]])%mod)%mod;
					
				}


			}
			// cout<<dp[i]<<" ";
			
		}
		cout<<dp[n]<<"\n";


	return 0;
}



