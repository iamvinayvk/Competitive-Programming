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
			ll n,x;
			cin>>n>>x;
			int ap=2;
			ll ans=1;
			for(int i=2;i<=n;i++)
			{
				if((ap+1<=n)&&(ap+x>=n))
				{
					ans=i;
					break;
				}
				ap+=x;
				
			}
			cout<<ans<<"\n";
		}


	return 0;
}



