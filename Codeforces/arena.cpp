/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 2/15/2021 8:12:35 PM
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
			ll n;
			cin>>n;
			vll a(n);
			for(ll i=0;i<n;i++)
			{
				cin>>a[i];
			}
			sort(all(a));
			reverse(all(a));
			
			ll ans=0;
			ll temp=a[n-1];
			for(ll i=n-1;i>=0;i--)
			{
				if(temp==a[i])
				{
					ans++;
				}
				else
					break;
			}
			cout<<n-ans<<"\n";

		}


	return 0;
}



