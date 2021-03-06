/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 1/3/2021 12:08:36 AM
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

bool isLucky(ll n)
{
	ll f=0;
	while(n)
	{
		ll d=n%10;
		n/=10;
		if(d==7||d==4)
			continue;
		else
		{
			f=1;
			break;
		}
	}
	if(f)
		return false;
	return true;
}

int main(){
	
		fast
		ll n;
		cin>>n;
		if(isLucky(n))
			cout<<"YES\n";
		else
		{
			ll f=0;
			for(ll i=4;i<=n;i++)
			{
				if(isLucky(i)&&(n%i==0))
				{
					f=1;
					break;
				}
			}
			if(f)
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}


	return 0;
}



