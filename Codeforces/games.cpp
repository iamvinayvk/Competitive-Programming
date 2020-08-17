#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		int n;
		cin>>n;
		int h[n],g[n];
		for(int i=0;i<n;i++)
		{
			cin>>h[i]>>g[i];
		}
		int changes=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(h[i]==g[j])
				{
					changes++;
				}
			}
		}
		cout<<changes;gmeggames


	return 0;
}

