/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 3/1/2021 1:49:59 AM
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
		ll n,l;
		cin>>n>>l;
		vll a(n);
		for(ll i=0;i<n;i++)
			cin>>a[i];
		double d=0;
		
		sort(all(a));
		ll mino=a[0];
		for(ll i=0;i<n;i++)
		{
			d=max(abs((double)a[i]-mino)/2,d);
			mino=a[i];
			// cout<<d<<"::  "<<i<<"\n";
		}
		mino=l;
		d=max(abs((double)a[n-1]-mino),d);
		mino=0;
		d=max(abs((double)a[0]-mino),d);
		printf("%0.10lf",d);


	return 0;
}



