#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){

		fast
		w(t)
		{
			int n;
			int m;
			cin>>n>>m;
			int values[n];
			for(int i=0;i<n;i++)
			{
				cin>>values[i];
			}
			int range=1<<n;
			int c=0;
			
			for(int i=1;i<range;i++)
			{	int sum=0;
				for(int j=0;j<n;j++)
				{
					if(i&(1<<(j)))
						sum+=values[j];
				}
				if(sum==m)
				{
					cout<<"Yes\n";
					c=1;
					break;
				}

				
			}
			if(c!=1)
			{
				cout<<"No\n";
				c=0;
			}
		}


	return 0;
}



