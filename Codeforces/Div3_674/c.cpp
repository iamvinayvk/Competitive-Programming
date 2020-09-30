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
			int n;
			cin>>n;
		
			ll ans=1e18;
			for(ll i=1;i*i<=n;i++)
			{
				ans=min(ans,((i-1)+(n-1)/i));
			}

			cout<<ans<<"\n";

		}


	return 0;
}



