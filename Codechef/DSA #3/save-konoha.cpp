#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		
		w(t)
		{
			ll n,z;
			priority_queue<int> p;
			cin>>n>>z;
			for(ll i=0;i<n;i++)
			{
				ll k;
				cin>>k;
				p.push(k);
			}
			int count=0;
			while(z>0)
			{	if(p.top()>0)
				{
				count++;
				z=z-p.top();
				ll f=p.top()/2;
				p.pop();
				p.push(f);
			}
			else
			{
				cout<<"Evacuate\n";
				z=-8;
				break;
			}

			}
			if(z!=-8)
				cout<<count<<"\n";

		}


	return 0;
}



