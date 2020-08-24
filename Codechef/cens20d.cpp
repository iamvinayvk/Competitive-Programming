#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		w(t)
		{
			ll n;
			cin>>n;
			vector<int> a(n);
			for(int i=0;i<n;i++) cin>>a[i];
			int b[n+5][n+5];
			int pairs=0;
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					b[i][j]=(a[i]&a[j]);
					if(i<j&&b[i][j]==a[i])
					{
						pairs++;
					}
				}
			}
			cout<<pairs<<"\n";
		}


	return 0;
}



