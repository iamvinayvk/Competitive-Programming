#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		int n;
		cin>>n;
		vector<int> v(n);
		for(int i=0;i<n;i++)
			cin>>v[i];
		int m;
		cin>>m;
		for (int i = 0; i < m; i++)
		{
			int x,y;
			cin>>x>>y;
			if(x==1)
			{
				v[x]+=(v[x-1]-y);
				v[x-1]=0;

			}
			else if(x==n)
			{
				v[x-2]+=(y-1);
				v[x-1]=0;
			}
			else{
				v[x-2]+=(y-1);
				v[x]+=(v[x-1]-y);
				v[x-1]=0;
				// cout<<v[x-2]<<" "<<v[x-1]<<" "<<v[x]<<"\n";
				

			}
		}
		for (int i = 0; i < n; i++)
		{
			cout<<v[i]<<"\n";
		}



	return 0;
}



