#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		int n,m;
		cin>>n>>m;
		int ans=0;

		for(int i=n+1;i<=m;i++)
		{	int c=0;
			for(int j=2;j<i;j++)
			{
				if(i%j==0)
				{	
					c=1;
					break;
				}
			}
			if(c==0)
			{
				ans=i;
				break;
			}
		}
		if(ans==m)
		{
			cout<<"YES";

		}
		else
			cout<<"NO";


	return 0;
}



