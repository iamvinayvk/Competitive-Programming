#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007



int main(){
	
		fast
		ll n;
		cin>>n;
		pair<ll,ll> a[n];
		ll max=0;
		ll diff=0;

		for(ll i=0;i<n;i++)
		{
			cin>>a[i].first>>a[i].second;

		}
		ll previousx=a[0].first;
		ll previousy=a[0].second;
		for(ll i=1;i<n;i++)
		{
			diff=abs(a[i].first-previousx);
			diff+=(abs(a[i].second-previousy));
			if(diff>max)
				max=diff;
			previousx=a[i].first;
			previousy=a[i].second;
		}
		cout<<max;


	return 0;
}



