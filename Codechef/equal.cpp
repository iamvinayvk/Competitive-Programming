/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/16/2020 10:26:02 PM
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
			ll e=0,o=0;
			for(ll i=0;i<n;i++)
			{
				ll in;
				cin>>in;
				if(in%2)
					o++;
				else
					e++;
			}
			ll ans=0;
			if(n==1)
				ans=0;
			else if(e>=2&&e<=o)
			{
				ans+=(2*(e-1));
				ans+=o;
			}
			else if(o>=2&&o<=e) 
			{
				ans+=(2*(o-1));
				ans+=e;
			}
			else if(e<2)
			{
				ans+=o;
			}
			else if(o<2)
				ans+=e;
			cout<<ans<<"\n";
		}


	return 0;
}



