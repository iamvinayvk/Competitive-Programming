#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007



int main(){
	
		fast
		int t;
		cin>>t;
		int k=1;
		while(k<=t)
		{
			ll n;
			cin>>n;
			ll x;
			cin>>x;
			pair<ll,ll> p[n+5];
			// vector<ll> v;
			for(ll i=0;i<n;i++)
			{
				cin>>p[i].first;
				if(p[i].first%x==0)
					p[i].first=p[i].first/x;
				else
				p[i].first=(p[i].first/x)+1;
				p[i].second=i+1;
				
			}
			sort(p,p+n);

			// int start=v.size();
			// for(int i=start;i<n;i++)
			// {
			// 	v.push_back(p[i].second);
			// }

			cout<<"Case #"<<k<<": ";
			for(int i=0;i<n;i++)
			{
				cout<<p[i].second<<" ";
			}

			cout<<"\n";
			k++;
		}


	return 0;
}



