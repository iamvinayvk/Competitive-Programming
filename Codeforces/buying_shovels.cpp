/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/19/2020 1:36:29 AM
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

ll maxdivisor(ll n, ll k)
{
	ll ans=n;
	for(ll i=1;i<=sqrt(n);i++)
	{
		if((n%i==0))
		{
			if(i<=k)
			ans=min(ans,n/i);
			if(n/i<=k)
				ans=min(ans,i);
		}
	}
	return ans;
}

int main(){
	
		fast
		w(t)
		{
			ll n,k;
			cin>>n>>k;
			
			if(k>=n)
			cout<<1<<"\n";
			else
			{
				ll ans=maxdivisor(n,k);
				cout<<ans<<"\n";
			}
		}


	return 0;
}



