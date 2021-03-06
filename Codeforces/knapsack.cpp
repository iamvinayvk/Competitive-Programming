/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 11/15/2020 10:07:46 PM
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
			ll n,w;
			cin>>n>>w;
			vector<pair<ll,ll>> items(n);
			for(int i=0;i<n;i++)
			{
				cin>>(items[i].F);
				items[i].S=i+1;
			}
			sort(all(items));
			int flag=0,size=0;
			vector<pair<ll,ll>> ans(n+5);
			for(int i=0;i<n;i++)
			{
				if((ans[i].F+items[i].F)<=w)
					{
						ans[i+1].F=ans[i].F+items[i].F;
						ans[i+1].S=items[i].S;
						size++;
					}

				if((ans[i+1].F<=w)&&(ans[i+1].F>=((w+1)/2)))
				{
					flag=1;
					break;
				}
			}
			if(!flag)
			{
				ans.clear();
				size=0;
				for(int i=n-1;i>=0;i--)
			{
				if((ans[i+1].F+items[i].F)<=w)
					{
						ans[i].F=ans[i+1].F+items[i].F;
						ans[i].S=items[i].S;
						size++;
					}

				if((ans[i].F<=w)&&(ans[i].F>=((w+1)/2)))
				{
					flag=2;
					break;
				}
			}
			}
			if(flag==1)
			{
				cout<<size<<"\n";
				for(int i=0;i<size;i++)
				{
					cout<<ans[i+1].S<<" ";
				}
				cout<<"\n";
			}
			if(flag==2)
			{
				cout<<size<<"\n";
				for(int i=n-1;i>=size;i--)
				{
					cout<<ans[i].S<<" ";
				}
				cout<<"\n";
			}
			if(flag==0)
				cout<<"-1\n";

		}


	return 0;
}



