/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 2/18/2021 3:05:30 PM
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
		vll a(n-1);
		for(ll i=0;i<n-1;i++)
			cin>>a[i];
		sort(all(a));
		ll f=0;
		for(ll i=0;i<n-1;i++)
		{
			if(i+1!=a[i])
			{
				cout<<i+1;
				f=1;
				break;
			}
		}
		if(f==0)
			cout<<n;


	return 0;
}



