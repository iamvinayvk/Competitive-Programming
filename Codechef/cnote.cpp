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
			ll x,y,k,n;
			cin>>x>>y>>k>>n;
			pair<ll,ll> p[n];
			for(int i=0;i<n;i++)
			{
				cin>>p[i].first>>p[i].second;
			}
			
			int c=0;
			for(int i=0;i<n;i++)
			{
				if(p[i].first>=(x-y)&&p[i].second<=k)
				{
					c=1;
					break;
				}
			}
			if(c)
				cout<<"LuckyChef\n";
			else
				cout<<"UnluckyChef\n";
		}


	return 0;
}



