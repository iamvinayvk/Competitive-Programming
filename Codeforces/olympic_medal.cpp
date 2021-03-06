/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 3/6/2021 5:26:28 PM
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
		ll n,mino=0,maxo=1e9,r1,p1,p2;
		cin>>n;
		for(ll i=0;i<n;i++)
		{
			ll in;
			cin>>in;
			if(mino<in)
				mino=in;

		}
		r1=mino;
		cin>>n;
		mino=0;
		for(ll i=0;i<n;i++)
		{
			ll in;
			cin>>in;
			if(mino<in)
				mino=in;

		}
		p1=mino;
		cin>>n;
		for(ll i=0;i<n;i++)
		{
			ll in;
			cin>>in;
			if(maxo>in)
				maxo=in;

		}
		p2=maxo;
		ll a,b;
		cin>>a>>b;
		double r=(b*p1);
		r=(double)r/(b*p1+a*p2);
		r=sqrt(r);
		cout<<fixed<<setprecision(12)<<(double)r1*r<<"\n";


	return 0;
}



