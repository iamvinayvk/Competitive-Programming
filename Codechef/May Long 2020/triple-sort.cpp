#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		w(t)
		{
			ll n,k;
			cin>>n>>k;
			int indices[3];
			ll val[n];
			ll count=1;
			ll change=1;
			for(ll i=0;i<n;i++)
			{
				cin>>val[i];
				if(val[i]>change)
				{
					count++;
					change=val[i];
					indices[i]++;
				}
				if(val[i]<change)



			}


		}


	return 0;
}



