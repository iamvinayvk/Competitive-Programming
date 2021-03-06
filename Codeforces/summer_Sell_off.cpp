/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 2/26/2021 11:20:07 PM
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
		ll n,f;
		cin>>n>>f;
		vector<pair<ll,ll>> store;
		ll ans=0;
		for(ll i=0;i<n;i++)
		{
			ll k,l;
			cin>>k>>l;
			if(k>=l)
				ans+=(l);
			else if(k>0&&k<l)
				store.push_back(make_pair(k,l));
		}
		vector<pair<ll,pair<ll,ll>>> increasingby2;
		for(ll i=0;i<store.size();i++)
		{
			ll k=store[i].F*2;
			ll l=store[i].S;
			ll extra_person;
			if(k>=l)
				extra_person=(l-store[i].F);
			else
				extra_person=(k-store[i].F);
			increasingby2.push_back(make_pair(extra_person,make_pair(store[i].F,store[i].S)));

		}
		sort(all(increasingby2));
		reverse(all(increasingby2));
		for(int i=0;i<increasingby2.size();i++)
		{
			if(f>0)
				{
					// cout<<increasingby2[i].F<<" "<<increasingby2[i].S.F<<" "<<increasingby2[i].S.S<<"\n";
					ans+=(increasingby2[i].first+increasingby2[i].S.F);
				}
				else
				{
					ans+=(increasingby2[i].S.F);
				}
			f--;
			
		}	
		cout<<ans;


	return 0;
}



