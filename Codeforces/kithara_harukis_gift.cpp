/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/2/2020 2:12:10 PM
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
		vll a(n);
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(all(a));
		reverse(all(a));
		ll f=0,s=0;
		for(ll i=0;i<n;i++)
		{
			if(f<=s)
				f+=a[i];
			else
				s+=a[i];
		}
		if(f==s)
			cout<<"YES";
		else
			cout<<"NO";

	return 0;
}



