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
			vector<int> v(n);
			for(int i=0;i<n;i++)
			{
				cin>>v[i];
				// v[i]=v[i]+i+1;
				v[i]=(v[i]*100+i+1);
			}
			// for(int i=0;i<n;i++)
			// 	cout<<v[i]<<" ";
			// cout<<"\n";
			vector<int> spread(n,1);
			for(int i=0;i<n;i++)
			{
				int min=INT_MAX;
				int max=0;
				for(int j=0;j<i;j++)
				{
					if(max<v[j])
					{
						max=v[j];
					}
				}
				for(int j=i+1;j<n;j++)
				{
					if(v[i]>v[j]||max>v[j])
						spread[i]++;
					if(min>v[j])
					{
						min=v[j];
					}
				}
				for(int j=0;j<i;j++)
				{
					if(v[j]>min||v[i]<v[j])
					{
						spread[i]++;
					}
				}
			}
			// for(int i=0;i<n;i++)
			// {
			// 	cout<<spread[i]<<" ";
			// }
			// cout<<"\n";
			int ma=*max_element(spread.begin(),spread.end());
			int mi=*min_element(spread.begin(),spread.end());
			cout<<(mi)<<" "<<(ma)<<"\n";
		}


	return 0;
}



