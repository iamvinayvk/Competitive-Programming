/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/20/2020 1:01:37 PM
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
			ll n ,k;
			cin>>n>>k;
			vector<pair<ll,ll>> col(n+1);
			for(ll i=0;i<=n;i++)
			{
				cin>>col[i].F;
				col[i].S=i;
			}
			sort(all(col));
			// vector<vector<ll>> ans(n,vector<ll>(4,0));
			ll j=0,r=n;
			for(ll i=0;i<n;i++)
			{
				ll diff=k-col[j].F;
				if(col[r].F>=diff)
				{

					cout<<col[j].S<<" "<<col[j].F<<" "<<col[r].S<<" "<<diff<<"\n";
					j++;
					col[r].F-=diff;

					
				}
				else if(col[r].F<k)
				{
					cout<<col[r].S<<" "<<col[r].F<<" "<<col[r-1].S<<" "<<k-col[r].F<<"\n";
					col[r-1].F-=(k-col[r].F);
					r--;
					
				}
				// sort(all(col));
			}

		}


	return 0;
}



