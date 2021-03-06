/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/16/2020 12:22:12 AM
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
		vll a(n),b(n);
		map<ll,ll> mp;
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
			mp[a[i]]=i;
		}
		for(ll i=0;i<n;i++)
			cin>>b[i];
		vll fre(n);
		for(int i=0;i<n;i++)
		{
			ll pos=(mp[b[i]]-i+n)%n;
			fre[pos]++;
		}
		ll m=0;
		for(ll i=0;i<n;i++)
			m=max(m,fre[i]);
		cout<<m;



	return 0;
}



