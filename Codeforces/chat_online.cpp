/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 3/6/2021 2:13:10 PM
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
		ll p,q,l,r;
		cin>>p>>q>>l>>r;
		map<ll,ll> z;
		for(ll i=0;i<p;i++)
		{
			ll a,b;
			cin>>a>>b;
			for(ll j=a;j<=b;j++)
			{
				z[j]++;
				// cout<<i<<" "<<z[j]<<"\n";
			}
		}
		ll ans=0;
		vector<ll> x;
		for(ll i=0;i<q;i++)
		{
			ll c,d;
			cin>>c>>d;
			for(ll j=c;j<=d;j++)
				x.push_back(j);
			
		}
		reverse(all(x));
		ll j=0;
		for(ll i=l;i<=r;i++)
		{
			for(ll k=j;k<x.size();k++)
			{
				if(z[x[k]+i]>0)
				{
					ans++;
					break;
				}
			}
			
		}
		cout<<ans;


	return 0;
}



