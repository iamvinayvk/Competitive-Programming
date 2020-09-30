#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007




int main(){
	
		fast
		int n;
		cin>>n;
		vector<ll> a(n+5);
		for(ll i=0;i<n;i++)
			cin>>a[i];
		stack<ll> s;
		int i=1;
		int max_xor=0;
		// cout<<(99999537^99998582)<<"\n";
		int xorr=(a[0]^a[1]);
		// cout<<xorr<<"\n";
		int last=0;
		s.push(a[0]);
		while(i<n)
		{
			 if(a[i]<s.top())
			{
				xorr=s.top()^a[i];
				max_xor=max(max_xor,xorr);
				s.push(a[i]);
			}
			else
			{
				
				// cout<<xorr<<"\n";
				while(!s.empty()&&s.top()<a[i]){
					xorr=a[i]^s.top();
					max_xor=max(max_xor,xorr);
					s.pop();

					
				}
				if(!s.empty())
				{
					xorr=a[i]^s.top();
					max_xor=max(max_xor,xorr);
					s.push(a[i]);
				}
				else
				{
					
					s.push(a[i]);
				}
			}
			
			// cout<<"max_xor: "<<max_xor<<" xorr: "<<xorr<<" i: "<<i<<" a[i]: "<<a[i]<<"\n";
			i++;

		}
		cout<<max_xor;




	return 0;
}



