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
			ll m,x,y;
			cin>>m>>x>>y;
			int range=x*y;
			vector<int> a(105);
			for(int i=0;i<m;i++)
			{
				int house;
				cin>>house;
				int low=max(1,house-range);
				int high=min(100,house+range);
				a[low]-=1;
				a[high+1]+=1;

			}
			for(int i=2;i<101;i++)
			{
				a[i]+=a[i-1];

			}
			int ans=0;
			for(int i=1;i<101;i++)
			{
				// cout<<"("<<i<<") "<<a[i]<<" ";
				if(a[i]==0)
					ans+=1;

			}
			cout<<ans<<"\n";
		}


	return 0;
}



