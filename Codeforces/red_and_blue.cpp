/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/29/2020 1:25:11 PM
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
			vll a(n+1);
			for(ll i=1;i<=n;i++)
			{
				cin>>a[i];
				a[i]+=a[i-1];
			}
			ll m;
			cin>>m;
			vll b(m+1);
			for(ll i=1;i<=m;i++)
			{
				cin>>b[i];
				b[i]+=b[i-1];
			}
			ll ans=0;
			for(ll i=0;i<=n;i++)
			{
				for(ll j=0;j<=m;j++)
				{
					ans=max(ans,a[i]+b[j]);
				}
			}
			cout<<ans<<"\n";
		}


	return 0;
}



