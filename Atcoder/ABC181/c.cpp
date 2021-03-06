/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 11/1/2020 5:52:55 PM
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
		vector<pair<ll,ll>> points(n);
		for(int i=0;i<n;i++)
		{
			cin>>points[i].F;
			cin>>points[i].S;
		}
		int flag=0;
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				for(int k=j+1;k<n;k++)
				{
					ll first=(points[i].F-points[j].F);
					ll second=(points[j].F-points[k].F);
					ll third=(points[i].S-points[j].S);
					ll fourth=(points[j].S-points[k].S);
					if(((first*fourth)-(second*third))==0)
					{
						flag=1;
						break;
					}
				}
			}
		}
		if(flag)
			cout<<"Yes";
		else
			cout<<"No";


	return 0;
}



