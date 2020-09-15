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
		vector<ll> a(n+5);
		for(ll i=0;i<n;i++)
			cin>>a[i];
		stack<ll> s;
		ll i=1;
		ll max_xor=0;
		ll xorr=0;
		s.push(a[0]);
		while(i<n)
		{
			if(a[i]<s.top())
			{
				xorr=s.top()^a[i];
				s.push(a[i]);
			}
			else
			{
				while(s.empty()||s.top()<a[i])
					s.pop();
				if(!s.empty())
				{
					xorr=a[i]^s.top();
				}
				else
				{
					s.push(a[i]);
				}
			}
			if(max_xor<xorr)
				max_xor=xorr;
			i++;

		}
		cout<<max_xor;




	return 0;
}



