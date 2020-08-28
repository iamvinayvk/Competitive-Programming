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
		map<ll,ll> a;
		for(ll i=0;i<n;i++)
		{
			ll k;
			cin>>k;
			a[k]=i;
		}
		ll v=0,p=0;
		ll m;
		cin>>m;
		for(ll i=0;i<m;i++)
		{
			ll k;
			cin>>k;
			v+=(a[k]+1);
			p+=n-a[k];
		}
		cout<<v<<" "<<p;


	return 0;
}



