/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 3/1/2021 2:26:23 AM
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
		vll v(n);
		for(ll i=0;i<n;i++)
			cin>>v[i];
		vll prefixv(n+1),sortv(n+1);
		for(ll i=1;i<=n;i++)
		{
			prefixv[i]=v[i-1]+prefixv[i-1];
		}
		sort(all(v));
		for(ll i=1;i<=n;i++)
		{
			sortv[i]=sortv[i-1]+v[i-1];
		}
		ll m;
		cin>>m;
		while(m--)
		{
			ll k,l,r;
			cin>>k>>l>>r;
			if(k==1)
			{
				cout<<prefixv[r]-prefixv[l-1]<<"\n";
			}
			else
			{
				cout<<sortv[r]-sortv[l-1]<<"\n";
			}
		}

	return 0;
}



