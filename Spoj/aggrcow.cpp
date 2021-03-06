/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/1/2020 12:35:34 AM
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

int is_cow_khush(vll a,ll m,ll c)
{
	ll prev=a[0];
	for(ll i=0;i<a.size();i++)
	{
		if(a[i]-prev>=m&&c>1)
		{
			// cout<<"a[i]: "<<a[i]<<" "<<"prev: "<<prev<<"\n";
			prev=a[i];
			c--;

		}
		
	}
	if(c>1)
		return 0;

	return 1;
}

int main(){
	
		fast
		w(t)
		{
			ll n,c;
			cin>>n>>c;
			vll a(n);
			for(int i=0;i<n;i++)
				cin>>a[i];
			sort(all(a));
			ll l=a[1]-a[0],h=a[n-1]-a[0],ans=0;
			while(l<=h)
			{
				ll m=l+(h-l)/2;
				// cout<<" m: "<<m<<"\n";
				if(is_cow_khush(a,m,c))
				{
					// cout<<ans<<" "<<m<<"\n";
					ans=m;
					l=m+1;
				}
				else
					h=m-1;
			}
			cout<<ans<<"\n";
		}


	return 0;
}



