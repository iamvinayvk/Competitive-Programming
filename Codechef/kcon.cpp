/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/17/2020 3:48:56 PM
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
		w(t)
		{
			ll n,k;
			cin>>n>>k;
			vll a(n);
			for(ll i=0;i<n;i++)
				cin>>a[i];
			ll maxo=0;
			ll sum=0,flag=0;
			for(ll i=0;i<n;i++)
			{
				sum+=a[i];
				if(sum<0)
					sum=0,flag=1;
				maxo=max(sum,maxo);
			}
			ll last=0;
			if(flag==0)
			maxo=maxo*k;
		for(ll i=0;i<n;i++)
		{
			if(a[i]<0)
				break;
			last+=a[i];
		}
		for(ll i=n-1;i>=0;i--)
		{
			if(a[i]<0)
				break;
			last+=a[i];
		}
		cout<<max(maxo,last)<<"\n";

		}


	return 0;
}



