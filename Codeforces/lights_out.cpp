#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		int a[6][6];
		for(int i=0;i<6;i++)
		{
			for(int j=0;j<6;j++)
			{
				a[i][j]=1;
			}
		}
		for(int i=1;i<4;i++)
		{
			for(int j=1;j<4;j++)
			{
				int k;
				cin>>k;
				
				
				if(k%2!=0)
				{
					a[i][j]=a[i][j]==0?1:0;
					a[i][j-1]=a[i][j-1]==0?1:0;
					a[i][j+1]=a[i][j+1]==0?1:0;
					// a[i+1][j-1]=a[i+1][j-1]==0?1:0;
					 a[i+1][j]=a[i+1][j]==0?1:0;
					// a[i+1][j+1]=a[i+1][j+1]==0?1:0;
					// a[i-1][j-1]=a[i-1][j-1]==0?1:0;
					a[i-1][j]=a[i-1][j]==0?1:0;
					// a[i-1][j+1]=a[i-1][j+1]==0?1:0;
					
				}
				
			}
			// cout<<"\n";
		}
		for(int i=1;i<4;i++)
		{
			for(int j=1;j<4;j++)
			{
				cout<<a[i][j];
			}
			cout<<"\n";
		}


	return 0;
}



