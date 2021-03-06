/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 3/6/2021 5:31:55 PM
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
		vector<pair<ll,ll>> a(n);
		for(ll i=0;i<n;i++)
		{
			ll c,d;
			cin>>c>>d;
			a[i]=make_pair(c,d);
		}
		sort(all(a));
		ll k=INT_MAX;
		int ans1=a[0].F;
		int ans2=a[1].S;
		int f=0;
		for(ll i=2;i<n;i++)
		{
			if(ans2>a[i].S)
			{
				f=1;
				ans2=a[i].S;
			}
		}
		// cout<<ans1<<" "<<ans2;
		cout<<min(ans1+a[0].S,(long long int)max(ans1,ans2));


	return 0;
}



