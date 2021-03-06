/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 2/28/2021 2:22:28 PM
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

ll nCr(ll n,ll r)
{
	ll p=1,k=1;
	if(n-r<r)
		r=n-r;
	if(r!=0)
	{
		while(r)
		{
			p*=n;
			k*=r;
			ll m=gcd(p,k);
			p/=m;
			k/=m;
			n--;
			r--;
		}
	}
	else
	{
		p=1;
	}
	return p;
}

int main(){
	
		fast
		ll n,r;
		cin>>n>>r;
		while(n>0||r>0)
		{
			ll val=nCr(n,r);
			cout<<n<<" things taken "<<r<<" at a time is "<<val<<" exactly.\n";
			cin>>n>>r;
		}


	return 0;
}



