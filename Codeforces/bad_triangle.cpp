#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



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
			if(a[0]+a[1]<=a[a.size()-1])
			{
				cout<<"1 2 "<<a.size()<<"\n";
			}
			else{
				cout<<"-1\n";
			}
		}


	return 0;
}



