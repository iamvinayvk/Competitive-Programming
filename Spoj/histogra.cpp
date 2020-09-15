#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007



int main(){
	
		fast
		ll x;
		cin>>x;
		while(x)
		{
			
			vector<ll> h(x+5);
			for(ll i=0;i<x;i++)
				cin>>h[i];
			ll i=0;
			stack<ll> s;
			ll tp;
			ll max_area=0;
			ll area=0;
			while(i<x)
			{
				if(s.empty()||h[s.top()]<=h[i])
					s.push(i++);
				else
				{
					tp=s.top();
					s.pop();
					area=h[tp]*(s.empty()?i:i-s.top()-1);
					if(area>max_area)
						max_area=area;
				}
			}
			while(!s.empty())
			{
				tp=s.top();
				s.pop();
				area=h[tp]*(s.empty()?i:i-s.top()-1);
				if(area>max_area)
					max_area=area;
			}
			cout<<max_area<<"\n";
			cin>>x;
		}


	return 0;
}



