/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/29/2020 10:52:01 PM
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
			vll a(n+1),peaks(n+1);
			for(ll i=1;i<=n;i++)
			{
				cin>>a[i];
			}
			for(ll i=2;i<n;i++)
			{
				if(a[i-1]<a[i]&&a[i]>a[i+1])
				{
					peaks[i]=1;
					// cout<<"peaks: "<<a[i]<<"\n";
				}
			}
			ll p=0;
			ll ans=0;
			ll l=1;
			for(ll i=1;i<k-1;i++)
			{
				if(peaks[i+1])
				{
					// cout<<"peak: "<<a[i+1]<<"\n";
					p++;
					ans=max(ans,p);
					l=min(l,(ll)1);
					// cout<<"i: "<<i<<"\n";
				}
			}
			for(ll i=2;i<=n-k+1;i++)
			{
				// cout<<"i: "<<i<<" peaks: "<<a[i]<<"\n";
				if(peaks[i]==1)
				{
					p--;
					
				}
				if(peaks[i+k-2]==1)
				{
					p++;
					if(p>ans)
					{
						ans=p;
						l=i;
					}
				}
			}
			cout<<ans+1<<" "<<l<<"\n";

		}


	return 0;
}



