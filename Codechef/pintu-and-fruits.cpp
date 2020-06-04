#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		w(t)
		{
			int n,m;
			cin>>n>>m;
			vector<int> fruits(n);
			for(int i=0;i<n;i++)
			{
				int input;
				cin>>input;
				fruits[i]=input;
			}
			map<int,int> cost;
			for(int i=0;i<n;i++)
			{
				int input;
				cin>>input;
				cost[fruits[i]]+=input;
			}
			int min=INT_MAX;
			for(auto i:cost)
			{
				if(min>i.second)
				{
					min=i.second;
				}
			}
			cout<<min<<"\n";


		}


	return 0;
}



