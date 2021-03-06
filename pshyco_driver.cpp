/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 1/10/2021 7:34:09 PM
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
			double x,h,n;
			cin>>x>>h>>n;
			vector<pair<double,pair<double,double>>> store_time(n);
			for(int i=0;i<n;i++)
			{
				cin>>store_time[i].S.S>>store_time[i].S.F;
				if(store_time[i].S.F<x)
					store_time[i].F=(store_time[i].S.S/(x-store_time[i].S.F));
				else
					store_time[i].F=-1;
			}
			ll ans=0;
			sort(store_time.begin(),store_time.end());
			for(int i=0;i<n;i++)
			{
				// cout<<store_time[i].F<<" \n";
				if(store_time[i].F>=0&&store_time[i].S.F<x)
				{
					// cout<<store_time[i].F<<" "<<x<<" \n";
					if(store_time[i].S.F>=h)
					{
						x/=2;
						ans+=6;
					}
					else
					{
						x=x-x/4;
						ans+=3;
					}
				}

			}
			cout<<ans<<"\n";
		}


	return 0;
}



