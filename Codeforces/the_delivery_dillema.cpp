/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 11/18/2020 9:15:45 PM
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
			vector<pair<ll,ll>> time(n);
			for(ll i=0;i<n;i++) 
				cin>>time[i].F;
			for(ll i=0;i<n;i++)
				cin>>time[i].S;
			sort(all(time));
			reverse(all(time));
			ll ans1=0;
			ll ans2=0;
			for(ll i=0;i<n;i++)
			{
				ans2+=time[i].S;
				if(time[i].F<=ans2)
				{
					ans1=max(ans1,time[i].F);
					ans2-=time[i].S;
				}
				

			}
			cout<<max(ans1,ans2)<<"\n";
		}


	return 0;
}



