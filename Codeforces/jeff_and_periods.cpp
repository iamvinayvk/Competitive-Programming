/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 10/29/2020 1:42:26 AM
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
		vll a(n);
		vector<pair<int,int>> vp;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			vp.push_back(make_pair(a[i],i));

		}
		sort(all(vp));
		ll d=0;
		ll last_value=vp[0].F;
		ll last_pos=vp[0].S;
		ll count=0;
		vector<pair<ll,ll>> ans;
		for(ll i=1;i<n;i++)
		{
			if(last_value==vp[i].F)
			{
				if(d==0)
				{
					d=vp[i].S-last_pos;
					last_pos=vp[i].S;
					last_value=vp[i].F;
					count++;

				}
				else if(d==vp[i].S-last_pos)
				{
					d=vp[i].S-last_pos;
					last_pos=vp[i].S;
					last_value=vp[i].F;
					count++;
				}
				else
				{
					
					count=-1;
					while(vp[i].F==last_value)
					{
						i++;
						if(i==n) break;
					}
					i--;
				}
			}
			else 
			{
				if(count>=0)
				{
					ans.push_back(make_pair(last_value,d));
					count=0;

				}
				
					d=0;
					last_pos=vp[i].S;
					last_value=vp[i].F;
					count=0;
			}
		}
		if(count>=0)
		{
			ans.push_back(make_pair(last_value,d));
		}
		cout<<ans.size()<<"\n";
		for(ll i=0;i<ans.size();i++)
		{
			cout<<ans[i].F<<" "<<ans[i].S<<"\n";
		}




	return 0;
}



