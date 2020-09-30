#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007
#define all(x) x.begin(),x.end()
#define F first
#define S second




int main(){
	
		fast
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int m;
		cin>>m;
		int b[m];
		for(int i=0;i<m;i++)
		{
			cin>>b[i];
		}
		int maxdiv=0;
		int k=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if((b[j]%a[i])==0)
				{
					if(maxdiv==(b[j]/a[i]))
					{
						k++;
					}

					if(maxdiv<(b[j]/a[i]))
					{
						k=1;
						maxdiv=(b[j]/a[i]);

					}

				}

			}
		}
		cout<<k<<"\n";


	return 0;
}



