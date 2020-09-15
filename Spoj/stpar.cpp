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
		ll x=n;
		while(x)
		{
			stack<ll> s;
			int c=1,a=1;
			vector<ll> v(x);
			for(ll i=0;i<x;i++)
			{
				cin>>v[i];
			}
			for(ll i=0;i<x;i++)
			{
				while(!s.empty()&&s.top()==a)
				{
					a++;
					s.pop();
				}
				if(v[i]==a)
				{
					a++;
				}
				else if(!s.empty()&&s.top()<v[i])
				{
					c=0;
					break;
				}
				else {
					s.push(v[i]);
				}
			}
			if(c)
				cout<<"yes\n";
			else
				cout<<"no\n";
			cin>>x;
		}


	return 0;
}



