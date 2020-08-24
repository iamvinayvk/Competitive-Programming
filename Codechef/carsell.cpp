#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007



int main(){
	
		fast
		w(t)
		{
			ll n;
			cin>>n;
			vector<ll> a(n);
			for(ll i=0;i<n;i++)
			{
				cin>>a[i];
			}
			sort(a.begin(),a.end());
			reverse(a.begin(),a.end());
			ll profit=0;
			for(ll i=0;i<n;i++)
			{	
				if(a[i]-i>0)
				profit+=((a[i]-(i))%mod);
			}
			cout<<profit<<"\n";
		}


	return 0;
}



