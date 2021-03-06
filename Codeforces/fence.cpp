/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 3/1/2021 11:07:03 AM
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
		ll n,k;
		cin>>n>>k;
		vll a(n);
		for(ll i=0;i<n;i++)
			cin>>a[i];
		ll i=0;
		ll sum=0;
		while(i<k)
		{
			sum+=a[i];
			i++;
			// cout<<"sum: "<<sum<<"\n";
		}
		ll ans=sum,index=1;
		for(ll i=k;i<n;i++)
		{
			sum=(sum-a[i-k])+a[i];
			// cout<<"sumloop: "<<sum<<"\n";
			if(ans>sum)
			{
				ans=sum;
				index=i-k+2;
			}
		}
		cout<<index;


	return 0;
}



