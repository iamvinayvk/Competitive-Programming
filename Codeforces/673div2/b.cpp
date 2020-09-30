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
			ll n,k;
			cin>>n>>k;
			
			vector<ll> ans(n);
			vector<int> v(n);
			int changer=0;
			for(int i=0;i<n;i++)
			{
				
				cin>>v[i];
				if((k%2==0)&&(v[i]==k/2))
				{
					// cout<<"halfed\n";
					ans[i]=(changer%2);
					changer++;
				}
				else if(2*v[i]<k)
				{
					ans[i]=0;
				}
				else
				{
					ans[i]=1;
				}

				
			}
			
			for(int i=0;i<n;i++)
			{
				cout<<ans[i]<<" ";
			}
			cout<<"\n";



		}

	return 0;
}



