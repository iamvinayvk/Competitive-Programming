/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 2/26/2021 12:22:28 PM
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
			ll n,c;
			cin>>n>>c;
			vector<pair<ll,ll>> w_n(n);

			for(ll i=0;i<n;i++)
			{
				cin>>w_n[i].second;
			}
			for(ll i=0;i<n;i++)
			{
				cin>>w_n[i].first;
			}
			vector<pair<double,ll>> perweight(n);
			for(ll i=0;i<n;i++)
			{
				perweight[i].first=((double)w_n[i].first/w_n[i].second);
				perweight[i].second=i;
			}
			sort(all(perweight));
			reverse(all(perweight));
			double ans=0;
			for(ll j=0;j<n;j++)
			{
				if(c==0)
					break;
				int i=perweight[j].second;
				if(w_n[i].second>c)
				{
					ans+=(double)c*(perweight[j].first);
					c=0;
					break;
				}
				else
				{
					ans+=((double)w_n[i].first);
					c-=w_n[i].second;
				}
			}
			cout<<(int)round(ans)<<"\n";
		}


	return 0;
}



